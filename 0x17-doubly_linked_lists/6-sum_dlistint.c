#include "lists.h"
/**
 * sum_dlistint - An integer
 * @head: A dlistint_t
 * Return: Always (value)
 */
int sum_dlistint(dlistint_t *head)
{
	int a;

	a = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL)
		{
			a += head->n;
			head = head->next;
		}
	}
	return (a);
}
