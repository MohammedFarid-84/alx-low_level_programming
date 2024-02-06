#include "main.h"

/**
 * lenstr - calculate length of a string.
 * @strs: a string.
 * Return: count of charecters or 0 if null.
 */
unsigned int lenstr(char *strs)
{
	unsigned int i = 0, x = 0;

	if (strs == NULL)
		return (0);

	while (*strs != '\0') /* test if all charecters is spaces */
	{
		if (*strs != ' ')
			x++;
		strs++;
	}

	if (x == 0)
		return (0);

	strs -= x;
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
	char **rwords, *word = NULL;
	int w = 0, i = 0;

	if (str == NULL || lenstr(str) == 0)
		return (NULL);

	rwords = malloc(sizeof(char *) * lenstr(str));
	if (rwords == NULL)
		return (NULL);

	word = strtok(str, " ");
	while (word != NULL)
	{
		if (word && lenstr(word) > 0)
		{
			i = 0;
			rwords[w] = malloc(sizeof(char) * lenstr(word) + 1);
			if (rwords[w] == NULL)
				return (NULL);
			while (*word != '\0')
			{
				rwords[w][i] = *word++;
				i++;
			}
			rwords[w][i] = '\0';
			w++;
		}
		word = strtok(NULL, " ");
	}

	rwords[w] = NULL;
	return (rwords);
}

/**
 * strtow - split text into words.
 * @str: a text.
 * Return: a pointer to text.
 */
char **strtow(char *str)
{
	char **newstr;
	char *strtwo;

	strtwo = strdup(str);

	newstr = splitwords(strtwo);
	free(strtwo);
	if (newstr != NULL)
		return (newstr);
	return (NULL);
}
