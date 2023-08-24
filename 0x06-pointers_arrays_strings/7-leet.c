#include "main.h"
#include <stdio.h>
/**
 * *leet - Entry
 * Descrtiption: a function that encodes a string into 1337.
 * @s: pointer to a string
 * Return: 0
 */

char *leet(char *s)
{
	int i;

	char a[] = {'a', 'e', 'o', 't', 'l'};
	char leet[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
			{
				*s = leet[i] + '0';
			}
		}
		s++;
	}
	return (s);
}
