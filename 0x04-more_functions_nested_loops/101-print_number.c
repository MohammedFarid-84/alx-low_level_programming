#include "main.h"

/**
 * splitno - split numbers for print it digit and digit
 * @n: number for split.
 * Return: void.
 */
void splitno(int n)
{
	int i, y;

	i = y = 0;

	if (n <= 9)
	{
		_putchar('0' + n);
	}
	else 
	{
		for (i = n; i > 0; i /= 10)
		{
			y = (y * 10) + (i % 10);
		}

		for (i = y; i > 0; i /= 10)
		{
			_putchar('0' + (i % 10));
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
