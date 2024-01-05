#include "main.h"

/**
 * _memset - fill a memory with selected data.
 * @s: a pointer has a data.
 * @d: the data will copy it.
 * @n: count of fill data.
 * Return: a pointer.
 */

char *_memset(char *s, char d, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = d;
	return (s);
}
