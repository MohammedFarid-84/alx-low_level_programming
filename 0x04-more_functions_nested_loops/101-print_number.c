#include "main.h"

/**
 * splitno - split numbers for print it digit and digit
 * @n: number for split.
 * Return: void.
 */
void splitno(int n)
{
	int y, z;

	y = 0;

	if (n <= 9)
	{
		_putchar('0' + n);
	}
	else
	{
		for (z = 1; z <= n; z *= 10)
			;

		for (; z > 1; z /= 10)
		{
			y = ((n * 10) / z) % 10;
			_putchar('0' + y);
		}
	}
}

/**
 * print_number - print an integer
 *
 * @x: the number for print.
 * Return: nothing.
 */

void print_number(int x)
{
	if (x == 0)
	{
		_putchar('0' + x);
	}
	else if (x < 0)
	{
		x *= -1;
		_putchar('-');
		splitno(x);
	}
	else
	{
		splitno(x);
	}
}
