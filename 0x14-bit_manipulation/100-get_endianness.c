#include <arpa/inet.h>
#include "main.h"

/**
 * get_endianness - test if system use big or small orders to store text
 *
 * Return: 1 if big endain and 0 if littel endain.
 */

int get_endianness(void)
{
	uint32_t x = 123;
	uint32_t y = htonl(x);

	if ((x >> 1 & 1) == (y >> 1 & 1))
		return (0);
	return (1);
}
