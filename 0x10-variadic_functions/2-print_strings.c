#include "variadic_functions.h"

/**
 * print_strings - print a strings.
 * @separator: a separator between strings.
 * @n: a number of arguments.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";

		if (i < n - 1)
			if (separator != NULL)
				printf("%s%s", str, separator);
			else
				printf("%s", str);
		else
			printf("%s\n", str);
	}
	va_end(args);
}

