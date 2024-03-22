#include "lists.h"

/**
 * insert_nodeint_at_index - insrt node in middal.
 * @head: a list to insert into.
 * @idx: a new element index.
 * @n: a new node value.
 *
 * Return: the adderss of the new node or null if faulit.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hd = *head, *tmp = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (head == NULL || *head == NULL || tmp == NULL)
		return (NULL);

	tmp->n = n;

	while (hd != NULL)
	{
		if (x == idx - 1)
		{
			tmp->next = hd->next;
			hd->next = tmp;
			return (tmp);
		}
		x++;
		hd = hd->next;
	}

	if (idx == 0 || idx > x)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	free(tmp);
	return (NULL);
}
