#include "main.h"

/**
 * _calloc - allocat memory size for array.
 * @nmemb: count members of array.
 * @size: size of a member.
 * Return: void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memo = malloc(nmemb * size);
	if (memo == NULL)
		return (NULL);

	memset(memo, 0, (nmemb * size));
	return (memo);
}
