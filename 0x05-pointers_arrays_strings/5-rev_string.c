#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * rev_string - Entry
 * Description:  a function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer to a string
 * Return: void
 */

void rev_string(char *s)
{
	int begin, end, count;
	char tmp[10000];

	while (s[count] != '\0')
		count++;

	end = count - 1;

		for (begin = 0; begin < count; begin++)
		{
			tmp[begin] = s[end];
			end--;
		}

		tmp[begin] = '\0';
		printf("%s\n", tmp);
}
