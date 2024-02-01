#include "main.h"

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

	newstr = malloc(strlen(s1) + strlen(s2) + 2);
	if (newstr != NULL)
	{
		while (*s1 != '\0')
		{
			newstr[i] = *s1++;
			i++;
		}
		while (*s2 != '\0')
		{
			newstr[i] = *s2++;
			i++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
