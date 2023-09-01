#include "main.h"
#include <string.h>


/**
 * _strchr -Entry
 * Description: a function that locates a character in a string.
 * @s: pointer to a string
 * @c: character
 * Return: pointer to the first oocurence of the character
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
