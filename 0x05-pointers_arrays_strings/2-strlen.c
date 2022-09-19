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
	*s = 0;

	for(; *s != '\0'; s++)
	{
		p++;
	}
	return (p);
}
