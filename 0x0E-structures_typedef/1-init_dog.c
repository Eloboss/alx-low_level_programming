#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- To initialise details of d dog
 * @name: Name of d dog
 * @age: Age of d dog
 * @owner: Owner of d dog
 * @d: Dog indentifier
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
