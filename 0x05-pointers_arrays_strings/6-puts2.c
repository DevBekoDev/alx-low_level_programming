#include "main.h"
#include <string.h>
/**
 * puts2 - Entry
 * Description: prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to a string
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
