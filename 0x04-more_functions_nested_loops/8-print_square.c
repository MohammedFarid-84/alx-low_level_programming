#include "main.h"

/**
 * print_square - print square from dash
 *
 * @size: the square lenth.
 * Return: void.
 */

void print_square(int size)
{
	int i, x;

	i = x = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = size;
		while (size > 0)
		{
			while (x < i)
			{
				_putchar('#');
				x++;
			}
			_putchar('\n');
			--size;
			x = 0;
		}
	}
}

