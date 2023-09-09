#include  "main.h"
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers.
 * @min: smallest value in the array
 * @max: largest value in the array
 * Return: NULL in fail - pointer to the address of the
 * memory block
 */

int *array_range(int min, int max)
{
	int *address;
	int i, j = 0;

	if (min > max)
	{
		return (NULL);
	}

	address = malloc(sizeof(*address) * ((max - min) + 1));

	if (address == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i <= max; i++)
		{
			address[j] = i;
			j++;
		}
		return (address);
	}
}
