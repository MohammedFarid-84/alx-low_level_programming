#include "main.h"

/**
 * _putchar - write a charecter in a stdout.
 * @c: a charecter to write.
 *
 * Return: 1 if no error.
 * -1 if error occurs.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
