#include "variadic_functions.h"

/**
 * print_strings- Prints Strings
 * @separator: Seperator to b used
 * @n: Number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list elo;
	unsigned int i;
	chat *str;

	va_start(elo, n);

		for (i = 0; i < n; i++)
	{
		str = va_arg(elo, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(elo);
}
