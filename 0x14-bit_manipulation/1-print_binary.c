#include "main.h"

/**
 * print_binary- Converts integer to binary
 * @n: Integer to b evaluated
 *
 * Return: Always 0
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
