#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * new_dog- To print a new dog
 * @name: Name of dog
 * @age: Age of d dog
 * @owner: Owner of d dog
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pim;

	int i;

	pim = malloc(sizeof(dog_t));

	if (pim == NULL)
	{
		free(pim);
		return (NULL);
	}

	pim->name = malloc(strlen(name) * sizeof(pim->name));

	if (pim->name == NULL)
	{
		free(pim->name);
		free(pim);
		return (NULL);
	}
	for (i = 0; i <= strlen(name); i++)
		pim->name[i] = name[i];

	pim->owner = malloc(strlen(owner) * sizeof(pim->owner));

	if (pim->owner == NULL)
	{
		free(pim->owner);
		free(pim);
		return (NULL);
	}
	for (i = 0; i <= strlen(owner); i++)
		pim->owner[i] = owner[i];

	pim->age = age;

	return (pim);
}
