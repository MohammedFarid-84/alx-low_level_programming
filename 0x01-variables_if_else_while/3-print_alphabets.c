#include <stdio.h>
/**
 * main - print alphabet lower and upercase by char value
 *
 * Return: zero alwys
 */

int main(void)
{
	char car, carA;

	/* get car from char value */
	car = 'a';
	carA = 'A';

	while (car <= 'z')
	{
		putchar(car);
		car = car + 1;
	}

	while (carA <= 'Z')
	{
		putchar(carA);
		carA = carA + 1;
	}

	putchar('\n');
	return (0);
}
