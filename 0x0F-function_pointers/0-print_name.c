#include "function_pointers.h"

/**
 * print_name - print a name using a fucntion pointer
 * @name: the name tp be printed
 * @f: the function used
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
