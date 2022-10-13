#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name- Prints name
 * @name: Name to b printed
 * @f: Pointer to name
 *
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	*f(name);
}
