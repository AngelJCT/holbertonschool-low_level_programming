#include "dog.h"
#include <stdio.h>
/**
 *print_dog-print structure
 *@d: pointer to structure
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d == NULL)
	{
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
