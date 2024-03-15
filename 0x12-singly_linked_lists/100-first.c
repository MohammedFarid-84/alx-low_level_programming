#include "lists.h"

/**
 * print_func - print a message before lunch a programm.
 *
 * Return: void.
 */

void __attribute__((constructor)) print_func(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
