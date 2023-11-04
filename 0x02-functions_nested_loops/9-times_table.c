#include "main.h"

/**
 * times_table - print numbers table from 0 to 9.
 *
 * Retrun: Always 0.
 */

void times_table(void)
{
	int x, y, z;

	x = y = z = 0;

	while (x < 10)
	{
		while (y < 10)
		{
			z = (y * x);
			if (z < 10)
			{
				if (y > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + z);
			}
			else if (z >= 10)
			{
				if (y > 0)
				{
					_putchar(' ');
				}
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
			}
			if (y < 9)
				_putchar(',');
		y++;

		}
		_putchar('\n');
		y = 0;
		x++;
	}
}
