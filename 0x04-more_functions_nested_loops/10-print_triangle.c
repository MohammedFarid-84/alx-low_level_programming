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
	x = 0;
       	y = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			while (x < i)
			{	
				if (x < (i - y))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			_putchar('\n');
			y++;
			x = 0;
			n--;
		}
	}
}
