#include "main.h"

/**
 * rev_string - convert a string in reveirs order.
 *
 * @s: a string for reverise..
 * Return: void.
 */

void rev_string(char *s)
{
	char str;
	int i = strlen(s);
	int x;

	for (x = 0; x < i / 2; x++)
	{
		str = s[x];
		s[x] =  s[i - x - 1];
		s[i - x - 1] = str;
	}
}
