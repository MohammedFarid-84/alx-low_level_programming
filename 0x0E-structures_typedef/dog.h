#ifndef DOG_H
#define DOG_H


/* necissery libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* my prototype functions */





/**
 * struct dog - a structure define a data for dogs.
 * @name: a first member is a dog name
 * @age: a dog age.
 * @owner: a dog owner name.
 * Description: this data struct contain an
 * information about dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
