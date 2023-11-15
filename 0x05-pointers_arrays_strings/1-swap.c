#include "main.h"

/**
 * swap_int - swap two numbers.
 * @a: a first number.
 * @b: a second number.
 * Return: no thing.
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
