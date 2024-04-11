#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: If the value is not present or the array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);
	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - l;
		else
			l = i + l;
	}
	return (-1);
}