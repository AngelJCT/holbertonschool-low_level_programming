#include "dog.h"
#include <stdio.h>
/**
 *print_dog-print structure
 *@d: pointer to structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}

	else if (d->name == NULL || d->owner == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	}

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
