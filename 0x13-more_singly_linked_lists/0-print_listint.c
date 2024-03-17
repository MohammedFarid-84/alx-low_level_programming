#include "lists.h"

/**
 * print_listint - print a list from type int.
 * @h: a linked list to print.
 *
 * Return: a count of elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;

		h = h->next;
	}

	return (n);
}

