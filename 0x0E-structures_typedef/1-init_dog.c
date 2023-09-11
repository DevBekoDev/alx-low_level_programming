#include "dog.h"
#include <stdio.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: name of the varaible
 * @name: value of the name variable
 * @age: value of the age variable
 * @owner: value of the owner name value
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
