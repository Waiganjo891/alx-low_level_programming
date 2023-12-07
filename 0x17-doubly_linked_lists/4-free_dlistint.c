#include "lists.h"
/**
 * free_dlistint - A void
 * @head: A dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}
	while ((a = head) != NULL)
	{
		head = head->next;
		free(a);
	}
}
