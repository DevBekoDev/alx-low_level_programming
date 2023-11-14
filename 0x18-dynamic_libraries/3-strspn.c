#include "main.h"
#include <string.h>

/**
 * _strspn - Entry
 * Description: a function that gets the length of a prefix substring.
 * @s: pointer to a string
 * @accept: pointer to to a string the characters to match
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
