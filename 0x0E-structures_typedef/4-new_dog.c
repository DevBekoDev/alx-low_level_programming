#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Create a new dog from the type dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: dog_t type of value
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int name_copy, owner_copy;

	name_copy = strlen(name) + 1;
	owner_copy = strlen(owner) + 1;
	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->name = malloc(sizeof(char) * name_copy);

	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * owner_copy);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->name = strcpy(new->name, name);
	new->age = age;
	new->owner = strcpy(new->owner, owner);

	return (new);
}
