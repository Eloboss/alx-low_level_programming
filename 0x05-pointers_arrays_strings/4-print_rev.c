#include "main.h"

/**
 * print_rev- Prints reverse of a string
 * @s: String to b evaluated
 */

void print_rev(char *s)
{
	long i = 0;
	long j;

	for ( ; s[i] != '\0'; )
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}

