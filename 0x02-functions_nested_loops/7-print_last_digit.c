#include "main.h"

/**
 * print_last_digit - print the last digit of numbers.
 *
 * @x: the number the code will convert it.
 * Return: the last digit.
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
		y = (x % 10) * -1;
	else
		y = x % 10;

	_putchar('0' + y);
	return (y);
}
