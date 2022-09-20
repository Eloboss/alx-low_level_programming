#include "main.h"

/**
 * rev_string- Reverses a string
 * @s: String to be evaluated
 */

void rev_string(char *s)
{
	long i = 0;
	long j;

	for ( ; s[i] != '\0'; )
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
