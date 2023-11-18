#include "main.h"
#include "ctype.h"

/**
 * string_toupper - convert a string to uppercase letters.
 * @str: a string for convert.
 * Return: string after convert.
 */

char *string_toupper(char *str)
{
	int x = strlen(str);
	int i = 0;

	for (i = 0; i < x; i++)
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
	}
	return (str);
}
