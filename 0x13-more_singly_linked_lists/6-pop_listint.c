#include "lists.h"

/**
 * pop_listint - delete an element from head.
 * @head: a list will delete from it.
 *
 * Return: if list is empty return zero or element deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t *hd;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);

	hd = *head;
	n = hd->n;
	*head = hd->next;
	free(hd);

	return (n);
}

