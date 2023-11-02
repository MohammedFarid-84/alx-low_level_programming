#include "main.h"
/**
 * print alphabet charecters
 *
 * Return: Always 0.
 */

int print_alphabet(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
