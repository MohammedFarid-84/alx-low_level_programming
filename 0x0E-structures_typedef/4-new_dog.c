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
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	p->name = malloc(strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	strcpy(p->name, name);

	p->age = age;

	p->owner = malloc(strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->owner);
		free(p);
		return (NULL);
	}
	strcpy(p->owner, owner);

	return (p);
}
