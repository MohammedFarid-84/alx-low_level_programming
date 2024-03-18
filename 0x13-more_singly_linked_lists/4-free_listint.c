#include "lists.h"

/**
 * free_listint - free allocated memory to list.
 * @head: a list will free.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

