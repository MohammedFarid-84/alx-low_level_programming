#include <stdio.h>

/**
 * main - print all arguments.
 * @argc: count of arguments.
 * @argv: artguments.
 * Return: zero always.
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
