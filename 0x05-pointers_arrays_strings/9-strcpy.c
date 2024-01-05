#include "main.h"

/**
 * _strcpy - copy a string.
 *
 * @x: a destnation string will copy on it.
 * @y: a string to copy.
 * Return: a copyed string.
 */

char *_strcpy(char *x, char *y)
{
	char *temp = y;

	while (*temp != '\0')
	{
		*x = *temp;
		x++;
		temp++;
	}

	*x = '\0';
	return (y);
}
