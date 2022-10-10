#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- To initialise details of d dog
 * @name: Name of d dog
 * @age: Age of d dog
 * @owner: Owner of d dog
 * @d: Dog indentifier
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
