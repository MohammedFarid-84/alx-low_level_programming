#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest.
 * @dest: a buffer.
 * @src: a second buffer.
 * @n: count bytes.
 * Return: dst buffer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	/* unsigned int x = strlen(src); */

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
