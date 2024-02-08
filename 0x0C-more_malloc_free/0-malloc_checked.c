#include "main.h"

/**
 * malloc_checked - checked if a memory is allocated.
 * @b: a count of bits will allocated in memory.
 * Return: void.
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(89);
	return (p);
}
