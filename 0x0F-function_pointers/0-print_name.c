#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name using a fucntion pointer
 * @name: the name tp be printed
 * @f: the function used
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
