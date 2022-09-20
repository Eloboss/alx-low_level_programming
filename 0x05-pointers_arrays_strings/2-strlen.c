#include "main.h"

/**
 * _strlen- Calculate length of string
 * @s: String to b evaluated
 *
 * Return: Always 0 on success
 */

int _strlen(char *s)
{
	long e;

	e = 0;

	for ( ; s[e] != '\0'; e++)
	{
		e++;
	}
	return (e);
}
