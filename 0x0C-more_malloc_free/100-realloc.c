#include "main.h"

/** _realloc - re-allocats memory.
 * @ptr: an old memory allocated.
 * @old_size: an old size of allocated memory.
 * @new_size:: a new size of allocated memory.
 *
 * Return: void.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (ptr == NULL)
		nptr = malloc(new_size);
	if (new_size == 0)
		return (NULL);
	if (old_size == new_size)
		return (ptr);
	return (nptr);
}

