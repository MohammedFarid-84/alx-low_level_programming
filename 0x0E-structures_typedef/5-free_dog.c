#include "dog.h"

/**
 * free_dog - free an allocated memory.
 * @d: a structure of dog data.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	exit(0);
}
