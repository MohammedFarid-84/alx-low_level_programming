#include "main.h"

/**
 * _strspn - show count ocurrence of charecters in string.
 * @s: string.
 * @f: find string.
 * Return: count of search times.
 */

unsigned int _strspn(char *s, char *f)
{
	int halflens = strlen(s) / 2;
	int i = 0;

	if (strlen(s) == 0 || strlen(f) == 0)
	{
		return (i);
	}
	else if (strchr(f, s[0]) != 0)
	{
		while (i <= halflens)
		{
			if (strchr(f, s[i]) == 0)
				break;
			i++;
		}
	}
	return (i);
}
