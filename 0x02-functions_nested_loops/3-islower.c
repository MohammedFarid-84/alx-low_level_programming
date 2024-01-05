#include "main.h"

/**
 * _islower - test if the charecter is lowercase or not
 *
 * @c: is a parameter is an ascii value pass into function for test.
 * Return: 1 if true and 0 if false.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
