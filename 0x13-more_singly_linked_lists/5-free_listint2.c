#include "lists.h"

/**
 * free_listint2 - free allocated memory to list.
 * @head: a list will free.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *hd;

	if (head == NULL || *head == NULL)
		return;

	hd = *head;
	while (hd != NULL)
	{
		tmp = hd->next;
		free(hd);
		hd = tmp;
	}
	*head = NULL;
}

