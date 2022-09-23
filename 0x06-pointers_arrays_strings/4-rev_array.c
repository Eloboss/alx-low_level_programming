#include "main.h"

/**
 * reverse_array- Reversescontent of array
 * @a: Array to be used
 * @n: Number of elements
 */

void reverse_array(int *a, int n)
{

	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}

