#include "lists.h"

/**
 * free_list - free a memory from allocated list.
 * @head: an address of a list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *nxt;

	while (head != NULL)
	{
		nxt = head->next;
		free(head->str);
		free(head);
		/* free((void *)head->len); */
		head = nxt;
	}
}
