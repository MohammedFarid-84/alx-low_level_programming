#include "main.h"
#include <ctype.h>

/**
 * cap_string - captailaiz all word in sting.
 * @str: a string.
 * Return: a captailaize strings.
 */

char *cap_string(char *str)
{
	int lenth = strlen(str);
	int i = 0;
	int nword = 0;

	for (i = 0; i < lenth; i++)
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}
		if (str[i] == ' ' || str[i] == '.' || str[i] == '\n' || str[i] == ',')
		{
			nword = 1;
		}
		else if (str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '"')
		{
			nword = 1;
		}
		else if (str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			nword = 1;
		}
		else if (str[i] == '\t')
		{
			nword = 1;
		}
		else if (nword == 1)
		{
			str[i] = toupper(str[i]);
			nword = 0;
		}
	}
	return (str);
}
