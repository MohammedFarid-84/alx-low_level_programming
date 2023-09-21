#include <stdio.h>
/**
 * main - get size of variables on 32 and 64 byte systems
 *
 * void: here no thing
 *
 * Return 0 alwys
 */

int main(void)
{
	printf("Size of a char: %d%s\n", sizeof(char), " byte(s)");
	printf("Size of an int: %d%s\n", sizeof(int), " byte(s)");
	printf("Size of a long int: %d%s\n", sizeof(long int), " byte(s)");
	printf("Size of a long long int: %d%s\n", sizeof(long long int), " byte(s)");
	printf("Size of a float: %d%s\n", sizeof(float), " byte(s)");

	return (0);
}
