#include "main.h"
#include <string.h>

/**
 * *_strncat - Entry
 * Description:  a function that concatenates two strings.
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: number of bytes fromm src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
