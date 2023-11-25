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
	int n = 0;

	if (strlen(s) == 0 || strlen(f) == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < lns; i++)
		{
			if (strchr(f, s[i]) != NULL)
			{
				n = 1;
				break;
			}
			else
			{
				n = 0;
			}
		}
	}

	if (n == 1)
		return (&s[i]);
	else
		return (NULL);
}
