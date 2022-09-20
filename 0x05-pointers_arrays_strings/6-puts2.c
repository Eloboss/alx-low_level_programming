#include "main.h"

/**
 * puts2- print half a character
 * @str: String to be evaluated
 */

void puts2(char *str)
{
	long i = 0;

	for ( ; str[i] != '\0'; i++)
		if (i % 2 == 0)
		_putchar(str[i]);
	_putchar('\n');
}
