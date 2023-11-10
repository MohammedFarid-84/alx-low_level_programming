#include "main.h"

/**
 * print_diagonal - print diagonals line.
 *
 * @n: the end point of line.
 * Return: no thing
 */

void print_diagonal(int n)
{
	int i, x;

	i = x = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
			i++;
			--n;
			if (n != 0)
			{
				while (x < i)
				{
					_putchar(' ');
					x++;
				}
				x = 0;
			}
		}
	}
}
