#include "main.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	printf("test strlen of 'My Dyn Lib is:%d\n", _strlen("My Dyn Lib"));
	printf("test abs of -8 func is:%d\n", _abs(-8));
	printf("test atoi of 1 is %d\n", _atoi("1"));

	return (EXIT_SUCCESS);
}
