#include "lists.h"
/**
 * add_dnodeint - Adds a new node
 * @head: Head of the list
 * @n: Value of the element
 * Return: Always (value)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *h;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
	{
		return (NULL);
	}
	a->n = n;
	a->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	a->next = h;
	if (h != NULL)
	{
		h->prev = a;
	}
	*head = a;
	return (a);

}
