#include "dog.h"
#include <stdio.h>
/**
 *init_dog-initializing a struct
 *@d: struct pointer
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
