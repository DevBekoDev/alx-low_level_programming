#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * *_cap_string - Entry
 * Description: a function that capitalizes all words of a string.
 * @str: pointer to a string
 * Return: 0
 */

char *cap_string(char *str)
{
	int i;
	int length;

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i] == ' ' || str[i] == '.')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		else if (str[i] == '\n' || str[i] == '\t')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	return (str);
}
