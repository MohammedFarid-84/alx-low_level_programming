#include "lists.h"

/**
 * free_listint - free allocated memory to list.
 * @head: a list will free.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *hd = *head;

	if (head == NULL)
		return;

	while (hd != NULL)
	{
		tmp = hd->next;
		free(hd);
		hd = tmp;
	}
	*head = NULL;
}

