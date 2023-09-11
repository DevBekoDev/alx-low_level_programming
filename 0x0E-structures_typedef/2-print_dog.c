#include "dog.h"
#include <stdio.h>
#include <math.h>
/**
 * print_dog - print the details of a dog
 * @d: pointer to a dog values
 * Return Void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else if (isnanf(d->age))
	{
		d->age = 0;
	}
	else if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	else if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
