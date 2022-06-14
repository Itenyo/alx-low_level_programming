#include "lists.h"
/**
 * add_dnodeint - Adds a node at the beggining of a list.
 * @head: Pointer to the current first element of the list.
 * @n: Number to initialize the new element.
 *
 * Return: Pointer to the new first element or 0 if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;

	if (!head)
		return (NULL);
	h = malloc(sizeof(dlistint_t));
	if (!h)
		return (NULL);

	h->n = n;
	h->next = *head;
	h->prev = NULL;
	if (*head)
		(*head)->prev = h;
	*head = h;
	return (h);
}
