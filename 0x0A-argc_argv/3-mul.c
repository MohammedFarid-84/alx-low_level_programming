#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the resulte of multiplaution two numbers.
 * @frst: a first number.
 * @scnd: a second number.
 * Return: zero if no errors and one if an error occurs.
 */

int main(int argc, char **argv)
{
	int n1 = 0;
	int n2 = 0;

	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\n", (n1 * n2));
	return (0);
}
