#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower - check if the charchter is lowercase
 * @c: entry
 * Return: (0) or (1)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
