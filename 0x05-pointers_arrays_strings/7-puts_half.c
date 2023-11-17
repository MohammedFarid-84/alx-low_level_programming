#include "main.h"

/**
 * puts_half - print a second half of a string.
 *
 * @s: a string.
 * Return: void.
 */

void puts_half(char *s)
{
	int lenth = strlen(s);
	int n;

	if (lenth % 2 == 0)
		n = lenth / 2;
	else
		n = lenth / 2 + 1;

	while (n < lenth)
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
