#include "main.h"

/**
 * create_array - create an array to store some values.
 * @size: a size of array.
 * @c: a data to store in array.
 * Return: pointer to array or null if error occured.
 */

char *create_array(unsigned int size, char c)
{
	char *newarray;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	newarray = malloc(size * sizeof(c));
	if (newarray != NULL)
		for (i = 0; i < size; i++)
			newarray[i] = c;

	return (newarray);
}
