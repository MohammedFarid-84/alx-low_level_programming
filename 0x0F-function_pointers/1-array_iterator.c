#include "function_pointers.h"

/**
 * array_iterator - print an array elements in tow format.
 * @array: an array name.
 * @size: a size of array.
 * @action: a print format functio.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
