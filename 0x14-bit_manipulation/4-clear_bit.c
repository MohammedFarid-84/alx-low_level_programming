#include "main.h"

/**
 * clear_bit - convert bits from an index into zero
 * @n: a number.
 * @index: an index.
 * Return: 1 if true and -1 if false.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = ((sizeof(*n) * 8) - 1);

	if (index > x)
		return (-1);

	*n =  *n & ~(1 << index);
	return (1);
}
