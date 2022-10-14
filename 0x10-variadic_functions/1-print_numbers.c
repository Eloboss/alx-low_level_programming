#include "variadic_functions.h"

/**
 * print_numbers- Sperates integers
 * @separator: Seperator to b used
 * @n: Integers to b seperated
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list elo;
	unsigned int i;

	va_start(elo, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(eli, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(elo);
}
