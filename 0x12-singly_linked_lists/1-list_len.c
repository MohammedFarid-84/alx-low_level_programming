#include "lists.h"

/**
 * list_len - count elements of list.
 * @h: a list pointer.
 *
 * Return: an unsigned int.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
