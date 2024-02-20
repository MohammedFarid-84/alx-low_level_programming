#include "dog.h"

/**
 * print_dog - print structure elements.
 * @d: a structure.
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	if (d->age >= 0)
		printf("Age: %.6f\n", d->age);
	else
		printf("Age: %s\n", "(nil)");

	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
