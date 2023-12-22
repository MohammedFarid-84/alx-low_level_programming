#include "main.h"

/**
 * read_textfile - read and write a file.
 * @filename: a file name for open.
 * @letters: a letters count.
 *
 * Return: 0 if error and 1 if true.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fc;
	char *txt;
	size_t result;


	if (strlen(filename) == 0 || letters <= 0)
		return (0);

	fc = fopen(filename, "r");

	if (!fc)
		return (0);

	txt = malloc(letters + 1);

	if (!txt)
	{
		fclose(fc);
		return (0);
	}

	result = fread(txt, 1, letters, fc);
	txt[letters] = '\0';


	printf("%s", txt);
	free(txt);
	fclose(fc);

	return (result);
}
