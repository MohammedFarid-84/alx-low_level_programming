#include "variadic_functions.h"

/**
 * print_numbers - print numbers with format.
 * @separator: a separator between numbers.
 * @n: count of numbers.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			if (separator != NULL)
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d", va_arg(args, int));
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
