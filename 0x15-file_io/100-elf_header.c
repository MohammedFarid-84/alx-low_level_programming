#include <elf.h>
#include <arpa/inet.h>
#include "main.h"

#if defined(__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif

/**
 * gettx - convert a code into text value.
 * @cr: charecter of code define.
 * @cod: a code value of e_indent varaible.
 * Return: text value.
 */
char *gettx(char cr, unsigned int cod)
{
	char *tx;

	switch (cr)
	{
		case 'C':
			if (cod == 0)
				tx = "Invalid class";
			else if (cod == 1)
				tx = "ELF32";
			else
				tx = "ELF64";
			break;
		case 'D':
			if (cod == 0)
				tx = "Invalid data encoding";
			else if (cod == 1)
				tx = "2's complement, little endian";
			else
				tx = "2's complement, big endian";
			break;
		case 'V':
			if (cod == 0)
				tx = "Invalid version";
			else
				if (cod != EV_CURRENT)
					tx = "1";
				else
					tx = "1 (current)";
			break;
	};
	return (tx);
}

/**
 * getos - convert unsigned value into text to be readable.
 * @no: a OS/ABI code.
 * Return: text with os name.
 */
char *getos(unsigned int no)
{
	char *tx1 = malloc(50);
	char *nams[20] = {
		"System V", "HP-UX", "NetBSD", "Linux",
		"GUN Hurd", "Sun Solaris", "Solaris", "AlX",
		"IRlX", "FreeBSD", "Tru64", "Novell Modesto",
		"OpenBSD", "OpenVMS", "NonStop Kernael",
		"AROS", "FenixOS", "Nuxi CloudABl",
		"Stratus Technologies OpenVOS"};
	if (no > 19)
		sprintf(tx1, "%s %x%s", "<unknown:", no, ">");
	else
		sprintf(tx1, "%s - %s", "UNIX", nams[no]);

	return (tx1);
}

/**
 * gettyp - convert unsigned value into text to be readable.
 * @no: a file type code.
 * Return: text with file type.
 */
char *gettyp(unsigned int no)
{
	char *tx2 = malloc(50);
	char *typ1[5] = {NULL, "REL", "EXEC", "DYN", "CORE"};
	char *typ2[5] = {"No file type", "(Relocatable file)",
		"(Executable file)", "(Shared object file)",
		"(Core file)"};

	if (tx2 == NULL)
	{
		return (NULL);
	}

	if (no < 5)
	{
		sprintf(tx2, "%s %s", typ1[no], typ2[no]);
	}
	else
	{
		sprintf(tx2, "%s %s", typ1[2], typ2[2]);
	}

	return (tx2);
}

/**
 * getEntry - convert entry point as data type
 * if it little or big enianness.
 * @d: data type big or little.
 * @n: number raised convert.
 * Return: converted number.
 */
unsigned int getEntry(unsigned int d, unsigned int n)
{
	if (d > 1)
		return (htonl(n));
	return (n);
}

/**
 * main - read an ELF file.
 * @n: count of arguments.
 * @filename: the ELF file name.
 * Return: 0 if file readable or 98 if not.
 */

int main(int n, char **filename)
{
	ssize_t bytsred;
	int i, fl;
	char *os, *typ;

	ElfW(Ehdr) header;
	if (n < 2)
		return (98); /* no file name */

	fl = open(filename[1], O_RDONLY);
	bytsred = read(fl, &header, sizeof(header));
	if (bytsred  > 0)
	{
		if (memcmp(header.e_ident, ELFMAG, SELFMAG) == 0)
		{
			printf("%s\n%s", "ELF Header:", "  Magic:   ");
			for (i = 0; i < 16; i++)
				printf(i < 15 ? "%02x " : "%02x", header.e_ident[i]);

			printf("\n");
			printf("%-36s %s\n", "  Class:", gettx('C', header.e_ident[4]));
			printf("%-36s %s\n", "  Data:", gettx('D', header.e_ident[5]));
			printf("%-36s %s\n", "  Version:", gettx('V', header.e_ident[6]));
			os = getos(header.e_ident[EI_OSABI]);
			printf("%-36s %s\n", "  OS/ABI:", os);
			printf("%-36s %u\n", "  ABI Version:", header.e_ident[EI_ABIVERSION]);
			typ = gettyp(header.e_type);
			printf("%-36s %s\n", "  Type:", typ);
			printf("%-36s %#x\n", "  Entry point address:",
			getEntry(header.e_ident[5], (unsigned int)header.e_entry));
		}
		else
		{
			return (98);
		}
	}
	free(os);
	free(typ);
	close(fl);
	return (0);
}
