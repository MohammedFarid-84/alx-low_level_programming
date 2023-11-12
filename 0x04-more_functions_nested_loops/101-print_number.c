#include "main.h"

/**
 * splitno - split numbers for print it digit and digit
 * @n: number for split.
 * Return: void.
 */
void splitno(int n,int i)
{
	int y, z;

	y = 0;

	if (n <= 9)
	{
		_putchar('0' + n);
	}
	else
	{
		for (z = 1; z <= n / 10; z *= 10)
			;

		for (; z > 0; z /= 10)
		{
			y = n / z;
			if (i == 1 && z == 1)
			{
				_putchar('0' + (y + 1));
			}
			else
			{
				_putchar('0' + y);
			}
			n -= y * z;
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
		if (x == INT_MIN)
		{
			x = INT_MAX;
			splitno(x, 1);
		}
		else
		{
			splitno(x, 0);
		}
	}
	else
	{
		splitno(x, 0);
	}
}
