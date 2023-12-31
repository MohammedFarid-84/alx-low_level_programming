#include "main.h"

/**
 * _strncpy - copy string with identfire.
 * @dest: a destnation string.
 * @src: a string will copy.
 * @n: an identfire of charecters count.
 * Return: copies of string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
