#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnumric - test if a parameter passed is number.
 * @str: the pointer of charcter.
 * Return: 0 if number and 1 if not.
 */

int isnumric(char *str)
{
	while (*str != '\0')
	{
		if (*str == '-')
		{
			str++;
			continue;
		}
		if (!isdigit(*str))
			return (1);
		str++;
	}
	return (0);
}

/**
 * testincoins - test amount is a coin.
 * @amount: an amount for test.
 * Return: 0 if in it and 1 if not.
 */

int testincoins(int amount)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int x = 0;

	while (x < 5)
	{
		if (amount == coins[x])
			return (0);
		x++;
	}
	return (1);
}

/**
 * main - print count of coins need to change amount of money.
 * @argc: count of arguments.
 * @argv: arguments.
 * Return: zero always.
 */

int main(int argc, char **argv)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int count, x, amount;

	x = count = amount = 0;

	if (argc <= 1 || argc > 2 || isnumric(argv[1]) != 0)
	{
		printf("%s\n", "Error");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (testincoins(amount) == 0)
	{
		count = 1;
	}
	else
	{
		for (x = 0; x < 5; x++)
		{
			while (amount >= coins[x])
			{
				amount -= coins[x];
				count++;
			}
		}
	}

	printf("%d\n", count);
	return (0);
}
