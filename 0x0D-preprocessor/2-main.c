#include <stdio.h>

/**
 * main - print a file name with standard macro.
 *
 * Return: zero always.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
