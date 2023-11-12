#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;

	printf("%s\n", "please insert a number: ");
	scanf("%d", &x);

	print_number(x);
	_putchar('\n');
	return (0);
}
