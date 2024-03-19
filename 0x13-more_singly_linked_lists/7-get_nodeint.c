#include "lists.h"

/**
 * get_nodeint_at_index - get a node by it index.
 * @head: a list.
 * @index: index of node.
 *
 * Return: the node has the spacefid index of NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (n == index)
		{
			node = head;
			return (node);
		}
		n++;
		head = head->next;
	}

	return (NULL);
}

