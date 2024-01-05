#include "main.h"
#define LEN 4

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char cpy[LEN + 1] = {0};
	char *str;
	char *ret;

	memset(cpy, 'H', LEN);
	str = "Z";
	ret = _strcpy(cpy, str);
	printf("%s\n%s\n%s\n", str, cpy, ret);
	return (0);
}
