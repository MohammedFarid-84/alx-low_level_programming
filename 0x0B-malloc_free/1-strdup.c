#include "main.h"

/**
 * _strdup - copy a string to stdout.
 * @str: a string to copy.
 * Return: null if no string and pointer
 * to string if it exist.
 */
char *_strdup(char *str)
{
	char *newstr;
	int i = 0;

	if (str == NULL)
		return (NULL);

	newstr = malloc(sizeof(char) * strlen(str));
	if (newstr != NULL)
	{
		while (*str != '\0')
		{
			newstr[i] = *str++;
			i++;
		}
	}
	return (newstr);
}
