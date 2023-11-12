#include "main.h"

/**
 * main - calc a prime factor numbers and print a large number of thim.
 *
 * Return: no thing.
 */

int main(void)
{
	long int i = 612852475143;
	long x = 2;
	int pf[100], y, z, max;

	for (; i > 0; i /= x)
	{
		if (i % x == 0)
		{
			y += 1;
			/* printf("prime factors members is: %lu\n", x); */
			pf[y] = x;
		}

		if (x == 2)
		{
			x += 1;
		}
		else
		{
			x += 2;
		}
	}

	z = sizeof(pf) / sizeof(pf[0]);
	max = pf[0];

	for (y = 0; y < z; y++)
	{
		if (pf[y] > max)
		{
			max = pf[y];
		}
		/* printf("mem %d - (%d)", y, pf[y]); */
	}
	/* printf("this is a large prime factor number: %d\n of number %ld\n", max, i); */
	printf("%d\n", max);

	return (0);
}
