#include "main.h"

/**
 * set_bit - set a selected bit to 1.
 * @n: a number will be changed.
 * @index: the posiotion of bit will add 1 into.
 * Return: 1 if work done and -1 if faul.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = (sizeof(*n) * 8) - 1;

	if (index > x)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
