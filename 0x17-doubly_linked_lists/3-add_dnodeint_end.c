#include "lists.h"
/**
 * add_dnodeint_end - Adds a node at the end of a list.
 * @head: Pointer to the current first element of the list.
 * @n: Number to initialize the new element.
 *
 * Return: Pointer to the new element or 0 if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *h = *head;

	if (!head)
		return (NULL);
	t = malloc(sizeof(dlistint_t));
	if (!t)
		return (NULL);

	t->n = n;
	t->next = NULL;
	if (!*head)
	{
		t->prev = *head;
		*head = t;
		return (t);

	}
	while (h->next)
		h = h->next;
	h->next = t;
	t->prev = h;
	return (t);
}
