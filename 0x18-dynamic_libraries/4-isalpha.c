#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 *
 * Description: ' checks for alphabetic character'
 * @c: input
 * Return: if true (1) or else (0)
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
