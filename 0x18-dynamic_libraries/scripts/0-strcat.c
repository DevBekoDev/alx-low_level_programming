#include "main.h"
#include <string.h>

/**
 * *_strcat - Entry
 * Description:  a function that concatenates two strings.
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
