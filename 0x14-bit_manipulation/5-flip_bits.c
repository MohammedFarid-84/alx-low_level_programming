#include "main.h"

/**
 * flip_bits - git a count of bits if changed
 * convert number to another number.
 * @n: a first number.
 * @m: a second number.
 * Return: count of deferent bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bn = n;
	unsigned long int bm = m;
	unsigned int i = 0;
	unsigned int len = ((sizeof(n) * 8) - 1);
	int count = 0;

	while (i <= len)
	{
		if ((bn >> i & 1) != (bm >> i & 1))
			count++;
		i++;
	}
	return (count);
}
