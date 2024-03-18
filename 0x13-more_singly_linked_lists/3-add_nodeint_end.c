#include "lists.h"

/**
 * add_nodeint_end - add a node in end of a list.
 * @head: a list to add node to it.
 * @n: a value to add.
 *
 * Return: an adderss of element or null if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
