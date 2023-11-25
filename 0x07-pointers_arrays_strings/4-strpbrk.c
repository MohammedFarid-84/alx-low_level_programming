#include "main.h"

/**
 * _strpbrk - print all charecters in a string.
 * @s: string.
 * @f: find string.
 * Return: string or null.
 */

char *_strpbrk(char *s, char *f)
{
	int i = 0;
	int lns = strlen(s);

	for (i = 0; i < lns; i++)
	{
		if (strchr(f, s[i]) != NULL)
			break;
	}
	return (&s[i]);
}
