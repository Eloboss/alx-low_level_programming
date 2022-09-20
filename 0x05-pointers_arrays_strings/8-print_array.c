#include "main.h"

/**
 * print_array- List elements in array
 * @a: Name of array
 * @n: Length of array
 */

void print_array(int *a, int n)
{
	int i = 0;

	for ( ; a[i] != '\0'; i++)
		printf("%d, ", a[i]);
}
