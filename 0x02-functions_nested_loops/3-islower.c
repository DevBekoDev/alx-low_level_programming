#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c) == 1)
		return (1);
	else
		return (0);
}
