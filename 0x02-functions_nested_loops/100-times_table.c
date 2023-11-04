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

	if (x < 0 || x > 15)
		exit(0);
	else
		for (i = 0; i <= x; i++)
		{
			for (n = 0; n <= x; n++)
			{
				printf("%4d,", (n * i));
			}
		}	printf("\n");
}
