#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char s1[98];
	char *p;
	int i;

	for (i = 0; i < 98 - 1; i++)
		s1[i] = '-';
	s1[i] = '\0';
	printf("%s\n", s1);
	p = _strncpy(s1, "Talk is cheap. Show me the code.\n", 64);
	printf("%s\n", s1);
	printf("%s\n", p);
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", s1[i]);
	}
	printf("\n");
	i = 0;

	while (i < 98)
	{
		printf("%s", "-");
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 98)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("%d", s1[i]);
		i++;
	}
	printf("\n");
	return (0);
}
