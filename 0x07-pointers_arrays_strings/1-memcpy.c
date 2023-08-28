#include "main.h"
#include <string.h>

/**
 * _memcpy - Entry
 * Description: a function that copies memory area.
 * @dest: pointer to destination
 * @src: pointer to a source
 * @n: number of bytes from memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n * sizeof(dest));
	return (dest);
}
