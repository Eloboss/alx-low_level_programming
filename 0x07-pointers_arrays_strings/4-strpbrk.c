#include "main.h"

/**
 * _strpbrk- Searches for a string
 * @s: String to,b used
 * @accept: Character to b matched
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
		int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}

		}

	x++;
	}

	return (NULL);
}
