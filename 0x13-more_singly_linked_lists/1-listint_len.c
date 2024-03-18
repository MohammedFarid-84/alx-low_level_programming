#include "lists.h"

/**
 * listint_len - return a lingth of list.
 * @h: a list to check.
 *
 * Return: count of list elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
