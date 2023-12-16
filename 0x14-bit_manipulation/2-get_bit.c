#include "main.h"

/**
 * get_bit - show a bit of a define index to the number.
 * @n: number.
 * @index: an index.
 * Return: a bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1Ul << ((sizeof(n) * 8) - 1);

	if (index > x)
		return (-1);

	return (n >> index & 1);
}
