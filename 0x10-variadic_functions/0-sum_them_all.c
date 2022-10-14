#include "variadic_functions.h"

/**
 * sum_them_all- Sum infinite numbers
 * @n: Integer to b added
 *
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list elo;
	unsigned int i;
	unsigned int sum;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(elo, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(elo, int);
	}

	va_end(elo);
	return (sum);
}
