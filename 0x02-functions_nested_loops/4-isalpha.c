#include "main.h"

/**
 * _isalpha - test if parameter is charecter in lower or appuer.
 *
 * @c: the carecter for test.
 * Return: 1 if true and 0 if false.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
