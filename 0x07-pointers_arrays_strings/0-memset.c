#include "main.h"

/**
 * _memset- fills memory with n-byte
 * @s: string to b used
 * @b: Byte
 * @n: number of bytes
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
