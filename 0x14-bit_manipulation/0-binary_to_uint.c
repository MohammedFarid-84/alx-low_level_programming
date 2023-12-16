#include "main.h"

/**
 * pwo - calc a power of bass number.
 * @bass: a bass number.
 * @exp: an exption of bass.
 * Return: the resulte of bass ^ exp.
 */

int pwo(int bass, int exp)
{
	int i = 0;
	int por = 1;

	if (bass == 0)
		return (0);

	if (bass == 1 || exp == 0)
		return (1);

	while (i < exp)
	{
		por *= bass;
		i++;
	}
	return (por);
}

/**
 * checkisdigit - check if the txet pass through func,
 * is a number between 0 - 1.
 * @tx: a text will check.
 * Return: 0 if false and 1 if true.
 */

int checkisdigit(const char *tx)
{
	int len = strlen(tx);
	int i = 0;

	if (len == 0)
		return (0);

	while (tx[i] != '\0')
	{
		if (!(tx[i] >= '0' && tx[i] <= '1'))
			return (0);
		i++;
	}
	return (1);
}

/**
 * binary_to_uint - convert binary numbers to decimal numbers.
 * @s: string has a binary number.
 * Return: an unsigned int number is a value of a converter no of binary.
 */

unsigned int binary_to_uint(const char *s)
{
	int i = 0;
	int result = 0;
	int len = 0;

	if(s == NULL)
		return (0);

	len = strlen(s);

	if (len == 0)
		return (0);

	if (checkisdigit(s))
	{
		while (i < len)
		{
			result += (s[len - 1 - i] - '0')  * pwo(2, i);
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (result);
}
