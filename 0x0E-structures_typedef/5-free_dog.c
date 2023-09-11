#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the memory of dog_t type of object
 * @d: dog_t type of object
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
