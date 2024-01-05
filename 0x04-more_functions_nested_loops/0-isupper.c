#include "main.h"

/**
 * _isupper - test if the charecter is uppercase.
 * @c: the charecter for test.
 * Return: 1 if upper 0 if else.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
