#include "main.h"

/**
 * puts_half- Prints half of a string
 * @str: String to b evaluated
 */

void puts_half(char *str)
{
	long count = 0;
	long i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
