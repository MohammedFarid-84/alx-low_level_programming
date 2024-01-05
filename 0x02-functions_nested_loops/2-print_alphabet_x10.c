#include "main.h"
/**
 * print_alphabet_x10 -  prints alphabet in lawercase 10 time.
 *
 * Return: Always 0.
 */

int print_alphabet_x10(void)
{
	/* set char a as integer in i varibale */
	char i = 'a';
	int x = 0;

	while (x < 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		i = 'a';
		_putchar('\n');
		x++;
	}
	return (0);
}
