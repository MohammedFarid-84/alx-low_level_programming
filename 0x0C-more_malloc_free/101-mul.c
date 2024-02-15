#include "main.h"

/**
 * testisdigit - test an input is digit.
 * @digt: an input.
 * Return: 0 if digit and -1 if not.
 */
int testisdigit(char *digt)
{

	while (*digt != '\0')
	{
		if (!(*digt >= '0' && *digt <= '9'))
			return (-1);
		digt++;
	}
	return (0);
}

/**
 * iszero - test if all numbers are zero.
 * @no: is a char pointer has a number.
 * Return: -1 if all number is zero,
 * 0 if not.
 */
int iszero(char *no)
{
	int x = 0, len = strlen(no);

	while (x < len)
	{
		if (*no != '0')
			return (0);
		x++;
		no++;
	}
	return (-1);
}

/**
 * mlty - multpulation two numbers.
 * @no1: a number first.
 * @no2: a second number.
 * Return: multipulation resulte.
 */
char *mlty(char *no1, char *no2)
{
	int len1 = strlen(no1), len2 = strlen(no2);
	int x, y, tmp, clc;
	char *reslt = calloc(len1 + len2 + 1, sizeof(char));

	if (iszero(no1) != 0 || iszero(no2) != 0)
	{
		free(reslt);
		reslt = malloc(2);
		reslt[0] = '0';
		reslt[1] = '\0';
		return (reslt);
	}

	for (x = len1 - 1; x >= 0; x--)
	{
		for (y = len2 - 1 ; y >= 0; y--)
		{
			clc = (no1[x] - '0') * (no2[y] - '0');
			tmp = reslt[x + y + 1] + clc;

			reslt[x + y + 1] = tmp % 10;
			reslt[x + y] += tmp / 10;
		}
	}

	/* add '0' to array elements to convert it to int */
	for (x = 0; x < (len1 + len2); x++)
		reslt[x] += '0';

	reslt[x] = '\0';

	return (reslt);
}

/**
 * main - start point.
 * @argc: count of arguments.
 * @argv: array of arguments.
 * Return: resulte of mulitpulation of tow numbers.
 */
int main(int argc, char **argv)
{
	char *res;
	int i = 0, len = 0;

	if (argc < 3 || argc > 3 ||
		testisdigit(argv[1]) != 0 ||
		testisdigit(argv[2]) != 0)
	{
		printf("%s\n", "Error");
		exit(98);
	}


	res = mlty(argv[1], argv[2]);
	if (res != NULL)
	{
		len = strlen(res);
		for (i = 1; i < len; i++)
		{
			_putchar(res[i]);
		}
		_putchar('\n');
		free(res);
	}
	return (0);
}
