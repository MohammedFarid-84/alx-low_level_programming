#include "main.h"

/**
 * lenstr - count a string charecters.
 * @str: a string.
 * Return: 0 if null or count charecters.
 */
unsigned int lenstr(char *str)
{
	unsigned int i = 0, x = 0;

	if (str == NULL)
		return (0);
	while (*str++ != '\0')
	{
		if (*str != ' ')
			x++;
	}
	if (x == 0)
		return (0);

	str -= x;
	if (x > 0)
		while (*str++ != '\0')
			i++;
	return (i);
}

/**
 * string_nconcat - concating a strings
 * until n charecters.
 * @s1: first string.
 * @s2: second string.
 * @n: count charcters.
 * Return: point to a new concating string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int lx = lenstr(s1), ly = lenstr(s2), x = 0, y = 0;

	if (n >= ly)
		newstring = malloc(lx + ly + 1);
	else
		newstring = malloc(lx + n + 2);

	if (newstring == NULL)
		return (NULL);

	if (lx > 0)
		while (*s1 != '\0')
		{
			newstring[y] = *s1;
			y++;
			s1++;
		}

	if (ly > 0 && n < ly)
	{
		while (x < n)
		{
			newstring[y] = s2[x];
			y++;
			x++;
		}
	}
	else if (ly > 0 && n >= ly)
	{
		while (*s2 != '\0')
		{
			newstring[y] = *s2;
			y++;
			s2++;
		}
	}
	newstring[y] = '\0';
	return (newstring);
}
