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
	char *e;

	e = (char *)malloc(sizeof(char) * b);
	if (e == NULL)
	{
		printf("98");
	}
	free(e);
}
