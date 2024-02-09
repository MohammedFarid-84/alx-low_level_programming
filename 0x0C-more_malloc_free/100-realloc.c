#include "main.h"

/**
 * _realloc - re-allocats memory.
 * @ptr: an old memory allocated.
 * @old_size: an old size of allocated memory.
 * @new_size:: a new size of allocated memory.
 *
 * Return: void.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		else
			return (NULL);
	}

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
	}
	else if (old_size != new_size)
	{
		nptr = malloc(new_size);
		memcpy(nptr, ptr, old_size);
		free(ptr);
	}
	else
	{
		nptr = ptr;
	}
	return (nptr);
}
