#include "main.h"

/**
 * print_line - entry
 * Description: a function that draws a straight line in the terminal.
 * @n: number of times _ should be printed
 */

void print_line(int n)
{
	int i;
	
	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
