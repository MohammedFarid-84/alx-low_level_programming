#include "main.h"

/**
 * get_bit - show a bit of a define index to the number.
 * @n: number.
 * @index: an index.
 * Return: a bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index & 1);
}
