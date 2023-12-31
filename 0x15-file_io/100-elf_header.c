#include <elf.h>
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
		sprintf(tx1, "%s %u%s", "<unknown:", no, ">");
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


	if (no < 5)
		sprintf(tx2, "%s %s", typ1[no], typ2[no]);
	else
		return (0);

	return (tx2);
}

/**
 * readelf - read an ELF file.
 * @filename: the ELF file name.
 * Return: 1 if file readable or erro number if not.
 */

int readelf(char *filename)
{
	int fl = 0;
	ssize_t bytsred;
	int i = 0;
	char *os, *typ;

	ElfW(Ehdr) header;
	fl = open(filename, O_RDONLY);
	while ((bytsred = read(fl, &header, sizeof(header))) > 0)
		if (memcmp(header.e_ident, ELFMAG, SELFMAG) == 0)
		{
			printf("%s\n%s", "ELF Header:", "  Magic:   ");
			for (; i < 16; i++)
			{
				if (i < 15)
					printf("%02x ", header.e_ident[i]);
				else
					printf("%02x", header.e_ident[i]);
			}
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
					(unsigned int)header.e_entry);
		}
		else
		{
			return (98);
		}
	free(os);
	free(typ);
	close(fl);
	return (0);
}

/**
 * main - run a read code.
 * @a: count of argoments.
 * @nam: name of file.
 * Return: zero always.
 */

int main(int a, char **nam)
{
	if (a < 2)
		return (-1);
	return (readelf(nam[1]));
}
