#include "main.h"

/**
 * get_endianness- Gets endianness
 *
 * Return: Always 0
 */

int get_endianness(void)
{
		unsigned int b = 1;
	char *a = (char *)&b;

	if (*a)
		return (1);
	else
		return (0);
}
