#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * *_calloc- Allocates memory
 * @nmemb: Number of elements
 * @size: Number of bytes
 *
 * Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *e;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	e = malloc(nmemb * size);
	if (e == NULL)
	{
		return (NULL);
	}
	return (e);
}
