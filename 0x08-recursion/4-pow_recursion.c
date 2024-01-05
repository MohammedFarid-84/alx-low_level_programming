#include "main.h"

/**
* _pow_recursion - calc a number power of another number.
* @x: the bass number.
* @y: the power number.
* Return: the resulte of multiblay number.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 1)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
