#include "main.h"

/**
 * _strspn - show count ocurrence of charecters in string.
 * @s: string.
 * @f: find string.
 * Return: count of search times.
 */

unsigned int _strspn(char *s, char *f)
{
	/* int halflens = strlen(s) / 2; */
	int i = 0;

	if (strchr(f, s[0]) != 0)
	{
		while (strchr(s, f[i]) == 0)
			i++;
	}
	return (i);
}
