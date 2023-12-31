#include "main.h"

/**
 * append_text_to_file - create a file with certain data if it not excest
 * and edit it if it exsest with read only permasson.
 * @filename: a file name.
 * @text_content: a text will write into file.
 * Return: 1 if no errors and -1 if fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl = 0;

	if (filename == NULL || strlen(filename) == 0)
		return (-1);
	if (text_content == NULL || strlen(text_content) == 0)
		return (1);

	fl = open(filename, O_WRONLY | O_APPEND);

	if (!fl)
		return (-1);

	if (write(fl, text_content, strlen(text_content)) == -1)
		return (-1);

	close(fl);
	return (1);
}
