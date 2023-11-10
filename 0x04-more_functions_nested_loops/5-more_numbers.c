#include "main.h"

/**
 * more_numbers - print numbers 10 times .
 *
 * Return: void.
 */

void more_numbers(void)
{
	int i, j;

	i = j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			if (j <= 9)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			j++;
		}

		j = 0;
		putchar('\n');
		i++;
	}
}
