#include "main.h"

/**
 * lenstr - calculate length of a string.
 * @strs: a string.
 * Return: count of charecters or 0 if null.
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
 * free_ary - free allocated memory.
 * @ary: a pointer to a memory.
 * @n: count of allocated paces.
 * Return: void.
 */
void free_ary(char **ary, int n)
{
	int i = 0;

	while (i < n)
	{
		free(ary[i]);
		i++;
	}
	free(ary);
}

/**
 * splitwords - split a string by words.
 * @str: a string.
 * Return: array of words or null.
 */
char **splitwords(char *str)
{
	char **rwords, **words;
	int w = 0, cr = 0, i = 0;

	if (str == NULL || lenstr(str) == 0)
		return (NULL);
	rwords = malloc(sizeof(char *) * lenstr(str));
	if (rwords == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (rwords[w] == NULL)
			rwords[w] = malloc(sizeof(char) * 20);
		if (*str != ' ')
		{
			if (rwords[w] == NULL)
			{
				free_ary(rwords, w);
				return (NULL);
			}
			rwords[w][cr] = *str;
			cr++;
		}
		else
		{
			rwords[w][cr] = '\0';
			cr = 0;
			w++;
		}
		str++;
	}
	rwords[w++] = NULL;
	words = malloc(sizeof(char *) * w);
	w = 0;
	while (rwords[w] != NULL)
	{
		if (lenstr(rwords[w]) != 0)
		{
			words[i] = rwords[w];
			i++;
		}
		w++;
	}
	words[i] = NULL;
	return (words);
}

/**
 * strtow - split text into words.
 * @str: a text.
 * Return: a pointer to text.
 */
char **strtow(char *str)
{
	char **newstr;

	newstr = splitwords(str);
	if (newstr != NULL)
		return (newstr);
	return (NULL);
}
