#include "main.h"

/**
 * _strlen_recursion- Returns d length of a string recursively
 * @s: String to b used
 *
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
