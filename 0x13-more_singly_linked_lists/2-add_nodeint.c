#include "lists.h"

/**
 * add_nodeint - add a new node in a biginig of list.
 * @head: a list to add in.
 * @n: a value to add.
 *
 * Return: the address of new element or null if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
