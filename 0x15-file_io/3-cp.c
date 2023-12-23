#include "main.h"
#include <errno.h>

/**
 * hndlerr - for show an error message with code.
 * @errnu: an error number.
 * Return: void.
 */
void hndlerr(int errnu)
{
	fprintf(stderr, "%s\n", strerror(errnu));
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

	if (file_from == NULL || strlen(file_from) == 0)
		return (97);
	if (file_to == NULL || strlen(file_to) == 0)
		return (97);

	/* open file from and test if it not exsest */
	f1 = open(file_from, O_RDONLY);
	if (f1 == -1)
		return (98);

	f2 = open(file_to, O_CREAT | O_WRONLY | O_APPEND, 0664);
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
	if (!close(f1) || !close(f2))
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
		hndlerr(97);
		return (0);
	}

	retfunc = cpy(filsnam[1], filsnam[2]);
	if (retfunc > 1)
	{
		hndlerr(retfunc);
		return (0);
	}
	return (0);
}
