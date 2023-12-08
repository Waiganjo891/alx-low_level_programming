#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *a;
	dlistint_t *b;
	unsigned int i;

	a = NULL;
	if (idx == 0)
	{
		a = add_dnodeint(h, n);
	}
	else
	{
		b = *h;
		i = 1;
		if (b != NULL)
		{
			while (b->prev != NULL)
			{
				b = b->prev;
			}
		}
		while (b != NULL)
		{
			if (i == idx)
			{
				if (b->next == NULL)
				{
					a = add_dnodeint_end(h, n);
				}
				else
				{
					a = malloc(sizeof(dlistint_t));
					if (a != NULL)
					{
						a->n = n;
						a->next = b->next;
						a->prev = b;
						b->next->prev = a;
						b->next = a;
					}
				}
				break;
			}
			b = b->next;
			i++;
		}
	}
	return (a);
}
