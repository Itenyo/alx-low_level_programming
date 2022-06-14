#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @head: Pointer to pointer to the linked list.
* @idx: Index desired for the new node.
* @n: Number to initialize the new node.
*
* Return: Pointer to the node at index, or NULL if the index is absent.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx
				     , int n)
{
	dlistint_t *new, *temp = *head;

	if ((!*head && idx) || !head)
		return (NULL);

	while (idx > 1)
	{
		temp = temp->next;
		if (!temp)
			return (0);
		idx--;
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (!idx)
	{
		new->prev = NULL;
		if (temp)
			temp->prev = new;
		*head = new;
		new->next = temp;
	}
	else
	{
		new->next = temp->next;
		if (temp->next)
			temp->next->prev = new;
		temp->next = new;
		new->prev = temp;
	}
	new->n = n;
	return (new);
}
