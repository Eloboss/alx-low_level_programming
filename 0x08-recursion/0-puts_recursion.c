#include "main.h"

/**
 * _puts_recursion- Prints a string recursively
 * @s: String to b used
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}

