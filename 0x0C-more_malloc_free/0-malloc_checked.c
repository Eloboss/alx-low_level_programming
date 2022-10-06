#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked- To print arrray
 * @b: Number of bytes
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	void *e;

	e = malloc(b);
	if (e == NULL)
	{
		exit(98);
	}
	free(e);
}
