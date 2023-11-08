#include "main.h"

/* betty style doc for function main goes there */
/**
 * main - if else statment and printf
 * Return: 0 always.
 */

void positive_or_negative(int n)
{
	char *dsc;

	if (n < 0)
	{
		dsc = " is negative";
	} 
	else if (n == 0)
	{
		dsc = " is zero";
	} 
	else
	{
		dsc = " is positive";
	}

	printf("%d%s\n", n, dsc);
}
