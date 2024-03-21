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
	listint_t *hd = *head, *tmp;
	unsigned int x = 0;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (hd->next != NULL)
	{
		if (x == idx)
		{
			tmp = malloc(sizeof(listint_t));
			if (tmp == NULL)
				return (NULL);
			tmp->n = n;
			tmp->next = hd->next;
			hd->next = tmp;
			return (hd);
		}
		hd = hd->next;
		x++;
	}
	return (NULL);
}
