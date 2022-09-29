#include "main.h"

/**
 * factorial- Finds a factorial of a number
 * @n: Number to b used
 *
 * Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n × factorial(n - 1));
	return (0);
}
