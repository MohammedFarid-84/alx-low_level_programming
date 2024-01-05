#include "main.h"

/**
 * puts2 - return an odd charecter of string.
 *
 * @s: a string to return.
 * Return: void.
 */

void puts2(char *s)
{
	int i = 0;
	int lenth = strlen(s);

	for (i = 0; i < lenth; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
