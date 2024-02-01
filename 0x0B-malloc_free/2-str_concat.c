#include "main.h"

/**
 * lenstr - calculte lingth of string.
 * @srts - a string.
 * Return: 0 if null count charecter if not.
 */
unsigned int lenstr(char *strs)
{
	unsigned int i = 0;

	if (strs == NULL)
		return (0);

	while (*strs == '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - concatent two strings.
 * @s1: a first string.
 * @s2: a second string.
 * Return: a concatent string or null.
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	newstr = malloc(lenstr(s1) + lenstr(s2) + 1);
	if (newstr != NULL)
	{
		if (s1 != NULL)
		{
			while (*s1 != '\0')
			{
				newstr[i] = *s1++;
				i++;
			}
		}
		if (s2 != NULL)
		{
			while (*s2 != '\0')
			{
				newstr[i] = *s2++;
				i++;
			}
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
