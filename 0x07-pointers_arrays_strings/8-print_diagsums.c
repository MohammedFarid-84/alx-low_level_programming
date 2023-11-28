#include "main.h"

/**
 * print_diagsums - sum array elements as diagnos.
 * @a: a pointer to array.
 * @size: size of array.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int x = 0;
	int y = 0;
	int j = size - 1;

	for (i = 0; i < size; i++)
	{
		x = x + a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		y = y + a[i * size + j];
		j--;
	}
	printf("%d, %d\n", x, y);
}
