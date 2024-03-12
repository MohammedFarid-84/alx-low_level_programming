#include "lists.h"

/**
 * add_node_end - add a node in a last of previouse node.
 * @head: a pointer to the list.
 * @str: a string to add.
 *
 * Return: the address of a new element or null if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	/* insert a data to the node */
	if (str != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;
	}
	else
	{
		new_node->str = "(nil)";
		new_node->len = 0;
		return (new_node);
	}

	/* if a first node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* find a last node to insert after it */
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;

	return (new_node);
}

