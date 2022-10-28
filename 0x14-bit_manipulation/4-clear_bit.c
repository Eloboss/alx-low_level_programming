#include "main.h"

/**
 * clear_bit- Sets a given bit to 0
 * @n: Inreger to b used
 * @index: Position
 *
 * Return: Always 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53)
	{
		return (-1);
	}

	*n &= ~ (1 << k);

	return (1);
}
