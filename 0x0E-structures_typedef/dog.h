#ifndef DOG_H
#define DOG_H


/* necissery libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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



/* my prototype functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
