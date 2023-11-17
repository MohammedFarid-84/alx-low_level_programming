#include "main.h"

/**
 * print_array - print an elments of an array in spical charecters.
 * @s: an a pointer contain a string.
 * @n: a count of elements.
 * Return: void.
 */

void print_array(int *s, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
			printf("%d, ", s[i]);
		else
			printf("%d", s[i]);

		i++;
	}
	printf("\n");
}
