#include "main.h"

/**
 * print_sign - test number sign.
 *
 * @i: the number for test.
 * Return: + for odd - for minus 0 for zero.
 */

int print_sign(int i)
{
	int x;

	if (i < 0)
	{
		_putchar('-');
		x = -1;
	}
	else if (i == 0)
	{
		_putchar('0');
		x = 0;
	}
	else
	{
		_putchar('+');
		x = 1;
	}
	return (x);
}
