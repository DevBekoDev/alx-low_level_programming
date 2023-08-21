#include "main.h"
#include <string.h>
/**
 * puts_half - Entry
 * Description:  a function that prints half of a string,
 * followed by a new line
 * @str: pointer to a string
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i, even, odd;

	even = len % 2 == 0;
	odd = (len - 1) / 2;

	if (even)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = odd; i < len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
