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
	int fd = 0;
	char *bufr;
	ssize_t redbits, wrtbits;

	if (strlen(filename) == 0 || letters <= 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bufr = malloc(sizeof(char) * letters);

	if (!bufr)
	{
		close(fd);
		return (0);
	}

	redbits = read(fd, bufr, letters);

	if (redbits == -1)
	{
		free(bufr);
		return (0);
	}

	wrtbits = write(STDOUT_FILENO, bufr, redbits);
	if (wrtbits == -1 || wrtbits != redbits)
	{
		free(bufr);
		return (0);
	}

	free(bufr);
	close(fd);
	return (wrtbits);
}
