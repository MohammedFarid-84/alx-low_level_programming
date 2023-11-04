#include "main.h"

/**
 * sum_nutral - calc sum of nutral number blow 1024 that are multiblies of 5, 3
 *
 * Return: summtion of numbers.
 */

int sum_nutral(void)
{
	int sum = 0;
	int i = 0;

	for (i = 0; i <= 1024; i++)
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}

	printf("%d\n", sum);
	return (0);
}

int main(void)
{
	sum_nutral();
	return (0);
}
