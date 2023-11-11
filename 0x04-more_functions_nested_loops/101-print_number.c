#include "main.h"

/**
 * splitno - split numbers for print it digit and digit
 * @n: number for split.
 * Return: void.
 */
void splitno(int n)
{
	if (n <= 9)
	{
		_putchar('0' + n);
	}
	else if (n < 100)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else if (n < 1000)
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
	else if (n < 10000)
	{
		_putchar('0' + (n / 1000));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
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
