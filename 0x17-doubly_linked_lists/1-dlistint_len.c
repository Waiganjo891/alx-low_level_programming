#include "lists.h"
/**
 * dlistint_len - A size_t
 * @h: A const
 * Return: Always (value)
 */
size_t dlistint_len(const dlistint_t *h)
{
	int a;

	a = 0;
	if (h == NULL)
	{
		return (a);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
