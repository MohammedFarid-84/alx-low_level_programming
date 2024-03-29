#include "variadic_functions.h"

/**
 * prntint - to print an int.
 * @args: a text to print.
 * Return: void.
 */
void prntint(va_list args)
{

	printf("%d", va_arg(args, int));
	va_end(args);
}

/**
 * prntchr - to print an char.
 * @args: a text to print.
 * Return: void.
 */
void prntchr(va_list args)
{
	printf("%c", va_arg(args, int));
	va_end(args);
}

/**
 * prntflot - to print a float.
 * @args: a text to print.
 * Return: void.
 */
void prntflot(va_list args)
{
	printf("%f", va_arg(args, double));
	va_end(args);
}

/**
 * prntstr - to print a string.
 * @args: a text tp print.
 * Return: void.
 */
void prntstr(va_list args)
{
	char *str = va_arg(args, char*);

	switch (str != NULL)
	{
		case 0:
			printf("%s", "(nil)");
			break;
		default:
			printf("%s", str);
			break;
	}
	va_end(args);
}

/**
 * print_all - print text with format.
 * @format: is a constant format.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;

	f_t form[] = {
		{'c', prntchr},
		{'i', prntint},
		{'f', prntflot},
		{'s', prntstr}
	};

	va_start(args, format);
	switch (format != NULL)
	{
		case 0:
			printf("\n");
			return;
		default:
			break;
	}
	while (format[i] != '\0')
	{
		while (j < 4)
		{
			if (format[i] == form[j].chr)
			{
				form[j].func(args);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(args);
}
