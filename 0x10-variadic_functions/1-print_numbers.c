#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @n: numer of paramateres
 * @separator: string to be printed between numbers
 * Return: if n == 0 return 0 otherwise return the sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			if (separator != NULL)
			{
				printf("%i%s", va_arg(args, int), separator);
			}
			if (separator == NULL)
			{
				printf("%i", va_arg(args, int));
			}
		}
		if (i == (n - 1))
		{
			printf("%i", va_arg(args, int));
		}
	}
	va_end(args);
	printf("\n");

}
