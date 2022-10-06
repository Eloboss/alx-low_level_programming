#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat- Catenates 2 strings
 * @s1: String to b catenated
 * @s2: String to b catenated
 * @n: Number of bytes
 *
 * Return: Always 0 else 1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int e;
	int p;
	char *d;


	for (e = 0; s1[e] != '\0'; )
	{
		e++;
	}
	for (p = 0; s2[p] != '\0'; )
		p++;

	d = (char *)malloc(sizeof(char) * (e + p + 1);
			if (d == NULL)
			{
			return (NULL);
			}
			for (e = 0; s1[e] != '\0'; e++)
			{
			d[e] = s1[e];
			}
			for (p = 0; p < n && s2[p] != '\0'; e++ p++)
			{
			d[e] = s2[p];
			}
			d[e] = '\0';
return (d);
}
