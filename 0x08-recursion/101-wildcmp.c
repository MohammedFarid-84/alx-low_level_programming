#include "main.h"

/**
 * compr - compar a two strings by charecter.
 * @s: a first string.
 * @c: a second string.
 * @i: incremnt str1.]
 * Return: 1 if indentical and 0 if not.
 */

int compr(char *s, char *c, int i)
{
	int len = strlen(s);

	if (i < len)
	{
		if (s[i] != c[i])
		{
			return (0);
		}
		else
		{
			return (compr(s, c, i + 1));
		}
	}
	return (1);
}

/**
 * wildcmp - compare a two strings if are same.
 * @s1: the first string.
 * @s2: the second string.
 * Return: 1 if a two strings are indentical and 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 != len2)
	{
		return (0);
	}
	else
	{
		return (compr(s1, s2, 0));
	}
	return (0);
}
