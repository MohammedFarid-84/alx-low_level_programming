#include <stdio.h>
/**
 * main - print single number less than tene
 *
 * Return: zero alwys
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');
	return (0);
}
