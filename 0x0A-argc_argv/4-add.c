#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnumric - test pointer if number or not
 * @str: pointer of string.
 * Return: 0 if number 1 if not.
 */

int isnumric(char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
			return (1);
		str++;
	}
	return (0);
}

/**
 * main - addtion numbers.
 * @argc: count of arguments.
 * @argv: pointer of arguments.
 * Return: zero if no errors, one if an error occured.
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else if (argc == 2)
	{
		printf("%d\n", atoi(argv[1]));
		return (0);
	}

	while (i < argc)
	{
		if (isnumric(argv[i]) != 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
