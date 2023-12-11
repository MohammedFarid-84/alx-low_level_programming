#include "main.h"

/**
* _sqrt - calc a squar root.
* @n: a number to get a squar for it.
* @i: an increment value from 0 to n number.
* Return: the result of squar root.
*/

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}

/**
* _sqrt_recursion - calc a squar root of number x.
* @n: a number for calc.
* Return: a resulte.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (_sqrt(n, 0));
}
