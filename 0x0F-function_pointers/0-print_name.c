#include "main.h"

/**
 * print_name- Prints name
 * @name: Name to b printed
 * @f: Pointer to name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
