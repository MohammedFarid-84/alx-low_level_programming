#include "main.h"

/**
 * print_binary - print decimal number in binary format.
 * @n: a decimal number to convert.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int msk = 1UL << ((sizeof(n) * 8) - 1);

	if (n <= 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while ((n & msk) == 0)
		msk >>= 1;

	while (msk > 0)
	{
		_putchar(n & msk ? '1' : '0');
		msk >>= 1;
	}
}
