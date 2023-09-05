#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - Entry
 * Description:   a function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: an array
 * Return: Null if str is NULL
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	array = (char *)malloc((sizeof(char) * strlen(str)) + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < sizeof(str); i++)
		{
			array[i] = str[i];
		}
	}
	array[strlen(str)] = '\0';
	return (array);

}
