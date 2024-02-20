#include "dog.h"

/**
 * new_dog - define a new dog data.
 * @name: a dog name.
 * @age: a dog age.
 * @owner: a dog owner.
 *
 * Return: a structure with full data.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc((sizeof(char *) * 2) + 8);

	if (p == NULL)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
