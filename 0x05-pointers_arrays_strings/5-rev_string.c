#include "main.h"

/**
 * rev_string- Reverses a string
 * @s: String to be evaluated
 */

void rev_string(char *s)
{
	long i = 0;
	char first, last;
	long size, half;

	for ( ; s[i] != '\0'; )
		i++;
	size = i - 1;
	half = size / 2;
	while (half >= 0)
	{
		first = s[size - half];
		last = s[half];
		s[half] = first;
		s[size - half] = last;
		half--;
	}
}
