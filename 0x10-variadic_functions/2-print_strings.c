#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	char *sep;

	if (separator == NULL || *separator == 0)
	{
		 sep = "";
	}
	else
	{
		sep = (char *) separator;
	}

	va_start(args, n);

	if (n > 1)
	{
		printf("%s", va_arg(args, char *));
	}
	for (i = 1; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s%s", sep, str);
	}
	va_end(args);
	printf("\n");
}
