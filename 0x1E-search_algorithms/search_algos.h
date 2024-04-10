#ifndef SEARCH_ALGORITHM_H
#define SEARCH_ALGORITHM_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked int
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
*/
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);

#endif
