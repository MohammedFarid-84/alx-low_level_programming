#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - get the right digit form a random number n
 *
 * Return: 0 alwys
 */

int main(void)
{
	int n;
	char *tal;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lst = n % 10;

	if (lst > 5)
	{
		tal = " and is greater than 5";
	} else if (lst == 0)
	{
		tal = " and is 0";
	} else if (lst > 0 && lst < 6)
	{
		tal = " and is less than 6 and not 0";
	} else 
	{
		tal = " and is less than 6 and not 0";
	}


	printf("Last digit of %d%s%d%s\n", n, " is ", lst, tal);


	return (0);
}
