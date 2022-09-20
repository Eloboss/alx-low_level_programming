#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_array- List elements in array
 * @a: Name of array
 * @n: Length of array
 */

void print_array(int *a, int n)
{
	int i = 0;

	for ( ; i < n; i++)
		printf("%d", *(a + i));

				if (i != n - 1)

				printf(", ");
	printf("\n");

}
