#include "main.h"

/**
 * _pow_recursion- Finds d power of a number
 * @x: Number to b used
 * @y: Number to b used
 *
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
	return (0);
}
