#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * largest_number2 - test if larg the number from 2 number
 * @x: the first number
 * @y: the second number
 * Return: largest number
 */

int largest_number2(int x, int y)
{
	int larg;

	if (x > y)
        	larg = x;
	else
        	larg = y;

	return (larg);
}


/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > largest_number2(b, c))
	{
		largest = a;
	}
	else if (b > largest_number2(a, c))
	{
		largest = b;
	}
	else if (c > largest_number2(a, b))
	{
		largest = c;
	}
	else if (a == largest_number2(b, c))
	{
		largest = a;
	}
	else if (b == largest_number2(a, c))
	{
		largest = b;
	}
	else if (c == largest_number2(b, a))
	{
		largest = c;
	}

	return (largest);
}
