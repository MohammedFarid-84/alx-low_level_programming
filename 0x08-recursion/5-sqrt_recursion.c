#include "main.h"

/**
* _sqrt_recursion - calc a squar root of number x.
* @x: a number for calc.
* Return: a resulte.
*/

int _sqrt_recursion(int n)
{
	static int i = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	if (i * i > n)
		return (-1);

	if (i * i == n)
	{
		int x = i;
		i = 0;
		return (x);
	}
	else
	{
		++i;
		return (_sqrt_recursion(n));
	}
	return (-1);
}
