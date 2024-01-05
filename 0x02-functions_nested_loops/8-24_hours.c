#include "main.h"

/**
 * jack_bauer - show time format.
 *
 * Retrun: Always 0.
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i < 24)
	{
		while (j < 60)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');

			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
			j++;
		}
		j = 0;
		i++;
	}
}

