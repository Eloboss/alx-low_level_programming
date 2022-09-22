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
	char *e = src;

	*e = *src;

	for ( ; *e != '\0'; )
		e++;
	*e = *dest;
	for ( ; *dest != '\0'; )
		dest++;
	        e++;
	*e = '\0';
	return (src);
}
