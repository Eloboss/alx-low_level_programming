#include "main.h"

/**
 * binary_to_uint- Convert binary to unsigned integer
 * @b: binary to convert
 *
 * Return: Always 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int sum = 0;
	int rem;
	int number;

	for (i = 0; b[i] != '\0'; )
	{
		i++;
	}

	if (!b)
	{
		return (0);
	}

	while (b > 0)
	{
		rem = number % 10;
		sum += (rem) * (2 ** i);
		number = number / 10;
		i++;
	}
	return (sum);
}
