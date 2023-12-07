#include "lists.h"
/**
 * get_dnodeint_at_index - A dlistint_t
 * @head: A dlistint_t
 * @index: An unsigned int
 * Return: Always (value)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			break;
		}
		head = head->next;
		i++;
	}
	return (head);
}
