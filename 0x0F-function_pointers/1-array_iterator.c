#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator- Prints arrays
 * @array: Array to b printed
 * @size: Size of d array
 * @action: Function pointers
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!action || !array)
	{
		return;
	}
	else
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
