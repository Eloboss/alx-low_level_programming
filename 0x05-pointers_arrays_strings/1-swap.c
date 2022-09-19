#include "main.h"

/**
 * swap_int- Swaps numbers
 * @a: Number to be evaluated
 * @b: Mumber to b evaluated
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
