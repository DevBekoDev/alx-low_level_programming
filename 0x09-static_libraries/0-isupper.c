#include "main.h"
#include <ctype.h>
/**
 * _isupper - Entry
 * Description:  checks for uppercase character
 * @c: int
 * Return: 1 if uppercase 0 if otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
