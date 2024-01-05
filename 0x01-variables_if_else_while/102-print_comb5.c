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
	int i, x;

	while (i <= 98)
	{
		x = i + 1;
		while (x <= 99)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + x / 10);
			putchar('0' + x % 10);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
