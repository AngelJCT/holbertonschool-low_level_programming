#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
		free(p);
		return (NULL);
	}

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
