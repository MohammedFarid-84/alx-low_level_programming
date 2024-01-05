#include "main.h"

/**
 * _strcmp - compare a two strings are same or not.
 * @s1: a first string.
 * @s2: a second string.
 * Return: 0 if same and less than and greter than.
 */

int _strcmp(char *s1, char *s2)
{
	int x = strlen(s1);
	/** int y = strlen(s2); **/
	int i = 0;
	int z;

	for (i = 0; i < x; i++)
	{
		z = s1[i] - s2[i];
		if (z != 0)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	return (z);
}
