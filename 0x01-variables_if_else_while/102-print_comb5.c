#include <stdio.h>
/**
 * main - print comaination of two pair of two numbers
 *
 * void here is no thing
 *
 * Return: zero alwys
 */

int main(void)
{
	int i, x, y, z;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = i; y <= 9; y++)
			{
				for (z = x; z <= 9; z++)
				{
					if (i == x && y == z)
					{
						continue;
					}
					putchar('0' + i);
					putchar('0' + x);
					putchar(' ');
					putchar('0' + y);
					putchar('0' + z);

					if (!(i == 9 && x == 8 && y == 9 && z == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
