#include "main.h"

/**
 * print_diagonal - Entry
 * Description: a function that draws a diagonal line on the terminal.
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
