#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Entry
 * Description:  a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of a char
 * @c: an array
 * Return: Null if size is zero
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);

}
