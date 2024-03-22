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

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}

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

	free(tmp);
	return (NULL);
}
