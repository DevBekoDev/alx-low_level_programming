#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'Print  prints 10 times the alphabet, in lowercase'
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		char a;

		for (a = 'a'; a <= 'z'; ++a)
		{
		_putchar(a);
		}
		_putchar('\n');
	}
}
