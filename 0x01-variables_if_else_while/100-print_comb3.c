#include <stdio.h>
/**
 * main - print copain of cople of number
 *
 * void here is nothing
 *
 * Return: 0 alwys
 */

int main(void)
{
	char a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, x;

	for (i = 0; i <= 9; i++)
	{
		for (x = i; x <= 9; x++)
		{
			if (a[i] != b[x])
			{
				putchar('0' + a[i]);
				putchar('0' + b[x]);
				if (!(i == 8 && x == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
