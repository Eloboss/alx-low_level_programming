#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index- Searches for integer
 * @array: Array to b used
 * @size: Size of d array
 * @cmp: Pointer function that compares
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i <size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);

}
