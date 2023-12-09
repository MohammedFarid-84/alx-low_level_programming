#include "main.h"

/**
 * _puts_recursion - print string with recursion.
 * @s: a pointer has a string.
 * Return: no thing.
 */

void _puts_recursion(char *s)
{

	if (*(s) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s++));
	_puts_recursion(s);
}
