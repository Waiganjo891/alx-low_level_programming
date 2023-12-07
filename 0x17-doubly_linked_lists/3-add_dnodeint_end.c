#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node
 * @head: Head of the list
 * @n: Value of the element
 * Return: Always (value)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *h;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
	{
		return (NULL);
	}
	a->n = n;
	a->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = a;
	}
	else
	{
		*head = a;
	}
	a->prev = h;
	return (a);
}
