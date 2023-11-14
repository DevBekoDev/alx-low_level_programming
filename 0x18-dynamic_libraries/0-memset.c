#include "main.h"
#include <string.h>

/**
 * _memset - Entry
 * Description:  a function that fills memory with a constant byte.
 * @s: pointer to a string
 * @b: constant byte
 * @n: number of bytes
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n * sizeof(s[0]));
	return (s);
}
