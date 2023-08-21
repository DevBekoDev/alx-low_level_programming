#include "main.h"

/**
 * rev_string - Entry
 * Description:  a function that reverses a stringi.
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char temp;
	int i, length, count;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	count = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[count];
		s[count--] = temp;
	}
}
