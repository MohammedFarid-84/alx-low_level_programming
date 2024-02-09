#include "main.h"

/**
 * array_range - create an integer array.
 * @min: a minimum value.
 * @max: a maximum value.
 *
 * Return: a pointer to array or null.
 */
int *array_range(int min, int max)
{
	int *ary, i = 0;

	if (min > max)
		return (NULL);

	ary = malloc(sizeof(int) * ((max - min) + 1));
	if (ary == NULL)
		return (NULL);

	while (min < (max + 1))
	{
		ary[i] = min;
		min += 1;
		i++;
	}
	return (ary);
}
