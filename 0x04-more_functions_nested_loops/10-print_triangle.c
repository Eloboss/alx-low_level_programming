#include "main.h"

/**
 * print_triangle- Print triangle
 * @size: Number to b evaluated
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(' ');
			_putchar(35);
		}
		_putchar('\n');
	}}
}
