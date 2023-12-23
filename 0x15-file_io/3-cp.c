#include "main.h"
#include <errno.h>

/**
 * hndlerr - for show an error message with code.
 * @errnu: an error number.
 * @filnam: string parametr.
 * Return: error number.
 */
int hndlerr(int errnu, char **filnam)
{
	char msg[252];

	switch (errnu)
	{
		case 97:
			strcpy(msg, "Usage: cp file_from file_to");
			break;
		case 98:
			strcpy(msg, "Error: can't read from ");
			strcat(msg, filnam[1]);
			break;
		case 99:
			strcpy(msg, "Error: cant't write to ");
			strcat(msg, filnam[2]);
			break;
		case 100:
			strcpy(msg, "Error: cant't close fd 3");
			break;
	};

	fprintf(stderr, "%s\n", msg);
	return (errnu);
}

/**
 * cpy - copy text from file into another file.
 *
 * @file_from: name of a file will copy from.
 * @file_to: name of a file will copy into or create,
 * if it not exsest.
 * Return: 1 when all thing done without error and,
 * error number if any thing done with wrror.
 */

int cpy(const char *file_from, const char *file_to)
{
	int f1, f2;
	size_t bytsread;
	char bufr[1024];

	if (file_from == NULL || file_to == NULL)
		return (97);

	/* open file from and test if it not exsest */
	f1 = open(file_from, O_RDONLY);
	if (f1 == -1)
		return (98);

	f2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f2 == -1)
		return (99);

	while ((bytsread = read(f1, bufr, sizeof(bufr))) > 0)
	{
		if ((write(f2, bufr, bytsread)) == -1)
		{
			break;
			return (99);
		}
	}
	if (close(f1) == -1 || close(f2) == -1)
		return (100);
	return (1);
}

/**
 * main - handle a pass arguments into copy func.
 * @no: count paramets.
 * @filsnam: name of files from and to.
 * Return: 0 always.
 */

int main(int no, char **filsnam)
{
	int retfunc = 0;

	if (no != 3)
	{
		hndlerr(97, filsnam);
		return (0);
	}

	retfunc = cpy(filsnam[1], filsnam[2]);
	if (retfunc > 1)
	{
		hndlerr(retfunc, filsnam);
		return (0);
	}
	return (0);
}
