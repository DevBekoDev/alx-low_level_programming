#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  a function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of memory to be located
 * Return: a pointer to the address of the memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *address;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	address = malloc(nmemb * size);
	if (address == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			address[i] = 0;
		}
		return (address);
	}
}
