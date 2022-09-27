#include "main.h"

/**
 * _strchr- Locatesa character in a string
 * @s: String to b used
 * @c: Character to b pointed
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
		int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);

	else
		return (NULL);

}
