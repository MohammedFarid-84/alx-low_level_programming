#include "main.h"

/**
 * factorial - calcluate a factorial of number.
 * @n: a number for calculate.
 * Return: a resulte.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
