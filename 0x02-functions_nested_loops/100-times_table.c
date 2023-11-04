#include "main.h"
/**
 * print_times_table - print time table with selected end point.
 *
 * @x: the end point parameter.
 * Retrun: nothing.
 */

void print_times_table(int x)
{
	int i, n;

	i = n = 0;

	if (x >= 0 && x <= 15)
		for (i = 0; i <= x; i++)
		{
			for (n = 0; n <= x; n++)
			{
				if (x == 0)
				{
					printf("%d\n", (n * i));
				}
				else if (n == 0)
				{
					printf("%d,", (n * i));
				}
				else if (n == x)
				{
					printf("%4d\n", (n * i));
				}
				else
				{
					printf("%4d,", (n * i));
				}
			}
		}
}
