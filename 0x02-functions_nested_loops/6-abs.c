#include "main.h"

/**
 * _abs - convert an abslute value.
 *
 * @x: the number for convert.
 * Return: absulte value.
 */

int _abs(int x)
{
	if (x < 0)
		x *= -1;

	return (x);
}
