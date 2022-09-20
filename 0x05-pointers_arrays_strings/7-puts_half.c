#include "main.h"

/**
 * puts_half- Prints half of a string
 * @str: String to b evaluated
 */

void puts_half(char *str)
{
	long i = 0;
	long n;

	for ( ; s[i] != '\0'; )
		i++;
	if (i % 2 == 0)
	for ( ; s[i] !=  '\0'; i++)
		n = i / 2;
	        _putchar(s[n]);
	else
		for ( ; s[i] != '\0'; )
			n = (i - 1) / 2;
	                _putchar(s[n]);
	
}
