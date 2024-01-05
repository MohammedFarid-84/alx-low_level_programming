#include "main.h"

/**
 * print_to_98 - print numbers from start point to 98.
 *
 * @x: the start point.
 * Return: nothing.
 */

void print_to_98(int x)
{
	if (x <= 98)
	{
		while (x <= 98)
		{
			if (x != 98)
				printf("%d, ", x);
			else
				printf("%d", x);
			x++;
		}
	}
	else if (x > 98)
	{
		while (x >= 98)
		{
			if (x != 98)
				printf("%d, ", x);
			else
				printf("%d", x);
			x--;
		}
	}
	printf("\n");
}
