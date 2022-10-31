#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *new_dog-create a new struct
 *@name: new name
 *@age: new age
 *@owner: new owner
 *Return: new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		return (NULL);
	}
	
	p->name = malloc(sizeof(name) * strlen(name));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(owner) * strlen(owner));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	else
	{
		strcpy(p->name, name);
		p->age = age;
		strcpy(p->owner, owner);
	}

	return (p);
}
