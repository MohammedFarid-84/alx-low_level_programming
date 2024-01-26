#include <stdio.h>

/**
 * main - show the program name.
 * @argc: is count of arguments.
 * @argv: is arguments of program.
 * Return: zero always.
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
