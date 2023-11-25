#include "main.h"

/**
 * _strchr - search for charecter in string.
 *
 * @s: a string.
 * @c: a charecter.
 * Return: null if not found and remainder string if found.
 */

char *_strchr(char *s, char c)
{
	int lenth = strlen(s);
	int i = 0;
	int bgn = 0;

	for (i = 0; i < lenth; i++)
	{
		if (s[i] == c)
		{
			bgn = 1;
			break;
		}
	}
	if (bgn == 1)
	{
		return (&s[i]);
	}
	else
	{
		return ('\0');
	}
}
