#include "main.h"

/**
 * string_toupper- changes lower case to upper
 * @e: String to b changed
 *
 * Return: Always 0
 */

char *string_toupper(char *e)
{
		int length;

	length = 0;

	while (e[length] != '\0')
	{
		if (e[length] >= 97 && e[length] <= 122)
		{
			e[length] = e[length] - 32;
		}
		length++;
	}
	return (e);
}

