#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node by its index.
 * @head: a list will delete from it.
 * @index: the index of target node.
 *
 * Return: 1 if successed and -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hd = *head, *tmp = NULL;
	unsigned int x = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = hd->next;
		free(hd);
		*head = tmp;
		return (1);
	}

	while (hd != NULL)
	{
		if (x == index)
		{
			tmp->next = hd->next;
			free(hd);
			return (1);
		}
		tmp = hd;
		hd = hd->next;
		x++;
	}
	return (-1);
}
