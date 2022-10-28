#include "main.h"

/**
 * set_bit- Set a given bit to 1
 * @n: Integer to b used
 * @index: Index
 *
 * Return: Always 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53)
	{
		return (-1);
	}
	
	*n = *n | (1 << k);

	return (1);
}
