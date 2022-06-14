#include "lists.h"

/**
 * free_dlistint - Frees a linked list.
 * @head: Pointer to the first node of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
