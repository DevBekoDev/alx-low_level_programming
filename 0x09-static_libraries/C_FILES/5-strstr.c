#include "main.h"
#include <string.h>

/**
 * _strstr - Entry
 * Dscription: a function that locates a substring.
 * @haystack: This is the main string to be examined.
 * @needle: This is the sub-string to be searched in s1 string.
 * Return:  a pointer to the beginning of the located substring,
  *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
