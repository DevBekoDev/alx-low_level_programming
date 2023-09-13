#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: array to iterate through
 * @size: number of elemnts in the array
 * @cmp: pointer to a finciton to be used
 * Return: the index of the first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			result = i;
			return (result);
		}
	}
	return (-1);
}
