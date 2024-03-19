#include "lists.h"

/**
 * sum_listint - summation of all data in the linked list.
 * @head: a linked list has a data.
 *
 * Return: the summation of zero if the list is null.
 */
int sum_listint(listint_t *head)
{
	int reslt = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		reslt += head->n;
		head = head->next;
	}
	return (reslt);
}
