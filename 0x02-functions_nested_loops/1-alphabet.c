#include "main.h"
/**
 * print_alphabet -  prints alphabet in lawercase.
 *
 * Return: Always 0.
 */

int print_alphabet(void)
{
	/* set char a as integer in i varibale */
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
