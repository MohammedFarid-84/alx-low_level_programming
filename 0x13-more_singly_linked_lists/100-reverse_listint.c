#include "lists.h"

/**
 * reverse_listint - reverse a linked list elements.
 * @head: a linded list to reverse.
 *
 * Return:a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = *head, *nxt, *prv = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (cur != NULL)
	{
		nxt = cur->next;
		cur->next = prv;
		prv = cur;
		cur = nxt;
	}
	*head = prv;
	return (prv);
}

