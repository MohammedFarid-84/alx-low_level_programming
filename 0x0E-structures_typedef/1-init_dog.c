#include "dog.h"

/**
 * init_dog - initilasing a structure dog.
 * @d: is a pointer to struct it will init.
 * @name: is first member of struct.
 * @age: is a second member of struct.
 * @owner: is a last member of struct.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
