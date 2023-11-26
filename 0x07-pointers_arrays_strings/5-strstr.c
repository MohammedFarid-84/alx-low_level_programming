#include "main.h"

/**
 * _strstr - print all charecters in a string.
 * @s: string.
 * @f: find string.
 * Return: string or null.
 */

char *_strstr(char *s, char *f)
{
	int i = 0;
	int j = 0;
	int lns = strlen(s);
	int lnsf = strlen(f);
	int n = 0;

	if (strlen(s) == 0 || strlen(f) == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < lnsf; j++)
		{
			for (i = 0; i < lns; i++)
			{
				if (f[j] == s[i])
				{
					n = 1;
					break;
				}
				else
				{
					n = 0;
				}
			}
			if (n == 1)
			{
				break;
			}
			else
				i = 0;
		}
	}

	if (n == 1)
		return (&s[i]);
	else
		return (NULL);
}