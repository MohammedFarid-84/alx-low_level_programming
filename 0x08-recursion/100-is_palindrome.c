#include "main.h"

/**
 * revs - reverse a string.
 * @s: pointer to a string.
 * Return: string.
 */
char *revs(char *s, int i, int j)
{
	char fchar;
	char *y = malloc(strlen(s) +1);

	y = strcpy(y, s);

	if (i < j)
	{
		fchar = y[i];
		y[i] = y[j];
		y[j] = fchar;
		return (revs(y, i + 1, j - 1));
	}
	return (y);
}

/**
 * is_palindrome - test if a text is a two side readable.
 * @s: is a text.
 * Return: 1 if true and 0 if false.
 */

int is_palindrome(char *s)
{
	int j = strlen(s);
	char *x;

	if (j <= 0)
	{
		return (1);
	}

	x = revs(s, 0, j - 1);
	if (strcmp(s, x) == 0)
	{
		return (1);
	}
	free(x);
	return (0);
}
