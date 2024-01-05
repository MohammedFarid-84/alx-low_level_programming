#include <stdio.h>
#include <unistd.h>
/**
 * main - write a messge to another user on linux
 *
 * void: no thing
 *
 * Return: here will return one 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
