#include "main.h"

/**
 * flip_bits- Toggles bit from one number to another
 * @n: Destination string
 * @m: Source String
 *
 * Return: Always 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int boss = n ^ m;
	unsigned int count = 0;

	while (boss)
	{
		if (boss & 1ul)
			count++;
		boss = boss >> 1;
	}
	return (count);
}
