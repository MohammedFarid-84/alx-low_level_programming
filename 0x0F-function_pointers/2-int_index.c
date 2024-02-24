#include "function_pointers.h"

/**
 * int_index - search for an index of element in an array.
 * @array: is an array.
 * @size: a size of array.
 * @cmp: a function do thing.
 *
 * Return: 0 if false and index otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
