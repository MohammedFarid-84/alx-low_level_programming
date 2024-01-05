#include "main.h"

/**
 * reverse_array - reve an elements order in array.
 * @a: a pointer of array.
 * @n: count of arrays elements.
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int x, i;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
