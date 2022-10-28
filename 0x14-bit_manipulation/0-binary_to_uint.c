#include "main.h"

/**
 * binary_to_uint- Convert binary to unsigned integer
 * @b: binary to convert
 *
 * Return: Always 0
 */

unsigned int binary_to_uint(const char *b)
{
		unsigned int n;

	if (b == NULL)
		return (0);
	for (n = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			n = n << 1;
		}
		else if (*b == '1')
		{
			n = n << 1;
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
