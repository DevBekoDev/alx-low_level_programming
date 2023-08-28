#include "main.h"
#include <string.h>
/**
 * _strpbrk - Entry
 * Description: a function that searches a string for any of a set of bytes.
 * @s: a string to be scanned
 * @accept: string containing the characters to match
 * Return: It returns a pointer to the character in s1 that
 * matches one of the characters in s2, else returns NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
