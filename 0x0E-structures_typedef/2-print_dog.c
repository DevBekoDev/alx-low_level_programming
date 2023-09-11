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
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
