#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
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
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	e = malloc(nmemb * size);
	if (e == NULL)
	{
		return (NULL);
	}

	_memset(p, 0, (nmemb * size));
	return (e);
}
