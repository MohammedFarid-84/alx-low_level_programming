#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - if else statment and printf
 * Return: 0 always.
 */

int main(void)
{
	int n;
	char *dsc;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0)
	{
		dsc = " is negative";
	} else if (n == 0)
	{
		dsc = " is zero";
	} else
	{
		dsc = " is positive";
	}

	printf("%d%s\n", n, dsc);
	return (0);
}
