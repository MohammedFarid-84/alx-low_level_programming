#include <stdio.h>

/**
 * main - print series of number 1 - 100.
 * instead of multiplay 3 and 5 print fizz buzz
 *
 * Return: nothing.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
