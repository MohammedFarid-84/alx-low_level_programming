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
	int pf[100], y = 0, z, max;

	while (i > 1)
	{
		if (i % x == 0)
		{
			i /= x;
			pf[y] = x;
			y += 1;
		}
		else
		{
			if (x == 2)
			{
				x += 1;
			}
			else
			{
				x += 2;
			}
		}
	}

	z = y;
	max = 2;

	for (y = 0; y < z; y++)
	{
		if (pf[y] > max)
		{
			max = pf[y];
		}
	}

	printf("%d\n", max);

	return (0);
}
