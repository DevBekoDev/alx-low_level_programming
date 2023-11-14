#include "main.h"
#include <string.h>
/**
 * *_strncpy - Entry
 * Description:  a function that copies a string.
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * @n: copies up to n characters from that string pointed to
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
