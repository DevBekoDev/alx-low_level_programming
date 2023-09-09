#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry
 * Description: a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: Null on fail - a pointer to that concatenated space
 * in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *result;

	len = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		len++;
	}
	result = malloc(sizeof(char) * (len + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		result[len++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		result[len++] = s2[i];
	}

	result[len] = '\0';
	return (result);
}
