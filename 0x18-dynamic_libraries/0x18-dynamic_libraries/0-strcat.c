#include "main.h"

/**
 * _strcat- it catenates two strings
 * @dest: String to b catenated
 * @src: String to be catenated
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int length, j; /* j will hold the length of the source */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
