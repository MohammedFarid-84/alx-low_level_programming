#include "function_pointers.h"

/**
 * print_name - pointer to a finction
 * @name: a string will pass to a function.
 * @f: a function.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
