#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list.
* @head: head of a list.
*
* Return: the address of the node where the loop starts.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *ptr1;
listint_t *prev;

ptr1 = head;
prev = head;
while (head && ptr1 && ptr1->next)
{
head = head->next;
ptr1 = ptr1->next->next;

if (head == ptr1)
{
head = prev;
prev =  ptr1;
while (1)
{
ptr1 = prev;
while (ptr1->next != head && ptr1->next != prev)
{
ptr1 = ptr1->next;
}
if (ptr1->next == head)
break;

head = head->next;
}
return (ptr1->next);
}
}

return (NULL);
}
