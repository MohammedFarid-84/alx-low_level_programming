#include "main.h"

/**
 * _isdigit - test if the parameter is a digit between 0 to 9.
 * @c: the digit for test.
 * Return: 1 if digit 0 if not.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
