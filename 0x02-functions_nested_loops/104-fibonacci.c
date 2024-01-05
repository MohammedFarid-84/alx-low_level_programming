#include "main.h"

/**
 * main - print fibonacci numbers starting with 1, 2.
 *
 * Return: nothing.
 */

int main(void)
{
	int i = 1;
	unsigned long long int n1, n2, n3;

	n1 = 1;
	n2 = 2;
	n3 = 0;

	printf("%llu, %llu, ", n1, n2);

	for (i = 3; i <= 98; i++)
	{
		n3 = (n1 + n2);

		if (i == 98)
		{
			printf("%llu\n", n3);
		}
		else
		{
			printf("%llu, ", n3);
		}
		n1 = n2;
		n2 = n3;
	}

	return (0);
}
