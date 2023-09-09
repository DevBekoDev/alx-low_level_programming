#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry
 * Description:  a function that allocates memory using malloc.
 * @b: int
 * Return: pointer to an address of the memory block
 */

void *malloc_checked(unsigned int b)
{
	void *address;

	address = malloc(b);
	if (address == NULL)
	{
		exit(98);
	}
	return (address);
}
