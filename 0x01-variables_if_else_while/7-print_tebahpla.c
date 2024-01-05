#include <stdio.h>
/**
 * main - print alphabet by char value
 *
 * Return: zero alwys
 */

int main(void)
{
	char car;

	/* get car from char value */
	car = 'z';

	while (car >= 'a')
	{
		putchar(car);
		car = car - 1;
	}

	putchar('\n');
	return (0);
}
