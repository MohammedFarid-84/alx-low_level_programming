#include "main.h"
/**
 * main - print a putchar text by one one charchter
 * void - the function don't return any value
 * Return: zero that mean exit function
 */

int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
