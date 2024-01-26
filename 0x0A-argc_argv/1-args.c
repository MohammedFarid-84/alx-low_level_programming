#include <stdio.h>

/**
 * main - show count of arguments on command line.
 * @argc: count of arguments.
 * @argv: an array of arguments.
 * Return: zero always.
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
