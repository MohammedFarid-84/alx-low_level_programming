#include "main.h"

/**
 * lenstr - calculte a lenth of string.
 * @strs: a string.
 * Return: count of charecters.
 */
unsigned int lenstr(char *strs)
{
	unsigned int i = 0;

	if (strs == NULL)
		return (0);

	while (*strs != '\0')
	{
		i++;
		strs++;
	}
	return (i);
}

/**
 * argstostr - show what user type split words by new line.
 * @ac: an integer.
 * @av: astring has arguments.
 * Return: strings.
 */
char *argstostr(int ac, char **av)
{
	char *newstr;
	int i = 0, j = 0, x = 0, lnth = 0;

	if (ac <= 1)
		return (NULL);

	for (; i < ac; i++)
		lnth += (lenstr(av[i]) + 1);

	if (lnth == 0)
		return (NULL);

	newstr = malloc(lnth + 1);
	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			newstr[x] = av[i][j];
			x++;
			j++;
		}
		newstr[x] = '\n';
		x++;
		i++;
	}
	newstr[x] = '\0';
	return (newstr);
}
