#include "main.h"

/**
 * _strcat - concatats two strings.
 * @a: string one.
 * @b: string two.
 * Return: the conctat string.
 */

char *_strcat(char *a, char *b)
{
	int x, y, i, n;
	int c = 0;
	
	x = strlen(a);
	y = strlen(b);
	n = x + y;

	for (i = x; i < n; i++)
	{
		a[i] = b[c];
		c++;
	}

	return (a);
}
