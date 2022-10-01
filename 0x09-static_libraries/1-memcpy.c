#include "main.h"

/**
 * _memcpy- copies memory area
 * @dest: String to b used
 * @src: String to b used
 * @n: number of bytes
 *
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		dest[i] = src[i];
	}

	return (dest);
}
