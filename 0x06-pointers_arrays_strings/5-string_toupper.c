#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * *string_toupper - Entry
 * Description:  a function that changes all lowercase letters
 * of a string to uppercase.
 * @str: pointer to a string
 * Return: 0
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
