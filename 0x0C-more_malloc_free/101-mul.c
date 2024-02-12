#include "main.h"
#include <gmp.h>

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
 * main - start point.
 * @argc: count of arguments.
 * @argv: array of arguments.
 * Return: resulte of mulitpulation of tow numbers.
 */
int main(int argc, char **argv)
{
	mpz_t a, b, resute;
	mpz_init(a);
	mpz_init(b);
	mpz_init(resute);

	if (argc < 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	if (testisdigit(argv[1]) != 0 || testisdigit(argv[2]) != 0)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	mpz_set_str(a, argv[1], 10);
	mpz_set_str(b, argv[2], 10);
	mpz_mul(resute, a, b);

	gmp_printf("%Zd\n", resute);

	mpz_clear(a);
	mpz_clear(b);
	mpz_clear(resute);
	return (0);
}

