#include "main.h"

/**
 * leet - encodes a string.
 * @s: string.
 * Return: encodeing.
 */

char *leet(char *s)
{
	int lenth = strlen(s);
	char chr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char no[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	int j = 0;

	for (i = 0; i < lenth; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == chr[j])
				s[i] = no[j];
		}
		j = 0;
	}
	return (s);
}
