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
	int i = strlen(y);
	int n = 0;

	for (n = 0; n < i; n++)
		x[n] = y[n];

	return (x);
}
