#include "lists.h"

/**
 * dlistint_len - Determines the size of a linked list.
 * @h: Head of the list.
 *
 * Return: Number of nodes of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
