#include "main.h"

/**
 * sqr - calc a square root for a number.
 * @n: number for calc.
 * @i: a rebotation of divition.
 * Return: a square root of number.
 */
int sqr(int n, int i)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (sqr(n, i + 1));
}

/**
 * tstrem - test if a number has a remainder if divition on an other number.
 * @a: number for test.
 * @b: a divitior.
 * @m: maximum divitsior when stop divsion.
 * Return: 0 it not divsion and 1 if divsion.
 */

int tstrem(int a, int b, int m)
{
	if (a == 2)
		return (1);

	if (b > m)
	{
		return (1); /* is prime */
	}
	else
	{
		if (b == 1)
			b++;

		if (a % b == 0)
		{
			return (0); /* not prime */
		}
		else
		{
			/* printf("n = %d, div = %d, sqr = %d\n", a, b, m); */
			return (tstrem(a, b + 1, m));
		}
	}
	return (1);  /* is prime */
}

/**
 * is_prime_number - test if number n is prime.
 * @n: a number for test.
 * Return: 0 if false and 1 if true.
 */

int is_prime_number(int n)
{
	int sqrs = sqr(n, 0);
	int x = 1;

	if (n < 0)
	{
		return (0);
	}
	else if (sqrs == -1)
	{
		return (1);
	}
	else if (n >= 0 && n < 2)
	{
		return (0);
	}
	else
	{
		/* printf("n = %d, sqr = %d\n", n, sqrs); */
		return (tstrem(n, x, sqrs));
	}
	return (0);
}
