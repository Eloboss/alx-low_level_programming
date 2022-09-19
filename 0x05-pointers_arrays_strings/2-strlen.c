#include "main.h"

/**
 * _strlen- Calculate length of string
 * @s: String to b evaluated
 *
 * Return: Always 0 on success
 */

int _strlen(char *s)
{
	char p = *s;
	*p = 0;

	while (*s != '\0')
	{
		p++;
	}
	return (p);
}
