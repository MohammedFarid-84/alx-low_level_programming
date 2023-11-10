#include "main.h"

/**
 * print_triangle - draw a triangle whith #.
 *
 * @n: a size of triangle.
 * Return: no thing.
 */

void print_triangle(int n)
{
	int i, x, y;

	i = n;
	x = y = 0;

	while (n > 0)
	{
		while (x < (i - y))
		{
			_putchar(' ');
			x++;
		}
		while (x <= i)
		{
			_putchar('#');
			x++;
		}
		y++;
		x = 0;
		printf("\n");
		--n;
	}
}
