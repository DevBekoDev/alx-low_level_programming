#include "main.h"

/**
 * print_triangle - Entry
 * Description:  a function that prints a triangle, followed by a new line.
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if (j >= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}
