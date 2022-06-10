#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of a list.
 * @head: Pointer to pointer to the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *dp;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (index > 1)
	{
		temp = temp->next;
		if (!temp)
			return (-1);
		index--;
	}
	dp = temp->next;
	if (!dp)
		return (-1);
	temp->next = dp->next;
	if (dp->next)
		temp->next->prev = temp;
	free(dp);
	return (1);
}
