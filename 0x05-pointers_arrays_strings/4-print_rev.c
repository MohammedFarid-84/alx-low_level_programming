#include "main.h"

/**
 * print_rev - print a string in reveirs order.
 *
 * @s: a string for print.
 * Return: void.
 */

void print_rev(char *s)
{
	int i = strlen(s);

	for (; i >= 0 ; i--)
		if (*(s + i) != '\0')
			_putchar(*(s + i));

	_putchar('\n');
}
