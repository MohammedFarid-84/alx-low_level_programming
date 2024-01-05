#include "main.h"

/**
* _strlen_recursion - count a charecter of string.
* @s: a pointer of string.
* Return: length of string.
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*(s) == '\0')
	{
		return (i);
	}
	return (_strlen_recursion(++s) + 1);
}
