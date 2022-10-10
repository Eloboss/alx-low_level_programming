#include "dog.h"
#include <stdlib.h>

/**
 * print_dog- Prints a type of dog
 * @d: Dog identifier
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	
		if (d->name == NULL)
	
		{
		
			printf("Name: (nil)\n");
	
		}
	
		else
		
			printf("Name: %s\n", d->name);
	
		printf("Age: %f\n", d->age);
	
		if (d->owner == NULL)
	
		{
		
			printf("Owner: (nil)\n");
	
		}
	
		else
		
			printf("Owner: %s\n", d->owner);
	}
	else if (!d)
		printf("\n");
}
