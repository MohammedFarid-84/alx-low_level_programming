#include "main.h"
#include <errno.h>
#include <sys/stat.h>

/**
 * fd - check if file is exiset or not.
 * @st: the status of file.
 * Return: 0 or 1.
 */
int fd(char *st)
{
	struct stat buffer;
	int exit = stat(st, &buffer);


	if (exit == 0)
		return (1); /* file exist */
	return (0); /* file not exist */
}

/**
 * hndlerr - for show an error message with code.
 * @errnu: an error number.
 * @filnam: string parametr.
 * Return: error number.
 */
int hndlerr(int errnu, char **filnam)
{
	char msg[252];
	int x = 1;

	switch (errnu)
	{
		case 97:
			strcpy(msg, "Usage: cp file_from file_to");
			break;
		case 98:
			strcpy(msg, "Error: Can't read from file ");
			strcat(msg, filnam[1]);
			x = fd(filnam[1]);
			break;
		case 99:
			strcpy(msg, "Error: Can't write to ");
			strcat(msg, filnam[2]);
			break;
		case 100:
			strcpy(msg, "Error: Can't close fd 3");
			break;
	};
	if (x == 1)
	{
		fprintf(stderr, "%s\n", msg);
	}
	else
	{
		fprintf(stdout, "%s\n", msg);
	}
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
	ssize_t bytsread;
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
			return (99);
	}
	if (bytsread == -1)
		return (98);

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
		return (97);
	}

	retfunc = cpy(filsnam[1], filsnam[2]);
	if (retfunc > 1)
	{
		hndlerr(retfunc, filsnam);
		return (retfunc);
	}
	return (0);
}
