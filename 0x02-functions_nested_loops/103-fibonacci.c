#include "main.h"

/**
 * main - print sum of even values from fibonacci numbers starting with 1, 2.
 *
 * Return: nothing.
 */

int main(void)
{
	int i = 1;
	long int n1, n2, n3, sum;

	n1 = 1;
	n2 = 2;
	n3 = 0;
	sum = 2;

	for (i = 3; i <= 50; i++)
	{
		n3 = n1 + n2;
		if (((n3 % 2) == 0) && n3 <= 4000000)
			sum += n3;

		n1 = n2;
		n2 = n3;
	}

	printf("%ld\n", sum);
	return (0);
}
