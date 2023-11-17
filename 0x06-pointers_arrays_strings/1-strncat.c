#include "main.h"

/**
 * _strncat - concatats two strings with identfire n.
 * @a: string one.
 * @b: string two.
 * @d: count of charecter from second string.
 * Return: the conctat string.
 */

char *_strncat(char *a, char *b, int d)
{
	int x, y, i, n;
	int c = 0;

	x = strlen(a);
	y = strlen(b);
	if (d <= y)
		n = x + d;
	else
		n = x + y;

	for (i = x; i < n; i++)
	{
		a[i] = b[c];
		c++;
	}

	return (a);
}
