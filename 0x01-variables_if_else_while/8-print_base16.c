#include <stdio.h>
/**
 * main - print single number from base 16
 *
 * void: here nothing
 *
 * Return: zero alwys
 */

int main(void)
{
	int i = 0;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (i = 0; i < 6; i++)
	{
		putchar(c);
		c = c + 1;
	}

	putchar('\n');
	return (0);
}
