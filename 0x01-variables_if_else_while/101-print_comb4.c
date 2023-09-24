#include <stdio.h>
/**
 * main - print compain of pairof numbers
 *
 * void here is nothing
 *
 * Return: 0 alwys
 */

int main(void)
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int c[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, x, y;

	for (i = 0; i <= 9; i++)
	{
		for (x = i; x <= 9; x++)
		{
			if (a[i] != b[x])
			{
				for (y = x; y <= 9; y++)
				{
					if (b[x] != c[y])
					{
						putchar('0' + a[i]);
						putchar('0' + b[x]);
						putchar('0' + c[y]);

						if (!(i == 7 && x == 8 && y == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	

	putchar('\n');
	return (0);
}
