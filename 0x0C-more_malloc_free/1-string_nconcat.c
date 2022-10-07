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
	int i;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (e = 0; s1[e] != '\0'; )
	{
		e++;
	}
	for (p = 0; s2[p] != '\0'; )
		p++;

	if (n > p)
	n = p;
	d = malloc(sizeof(char) * (e + n + 1));
			if (d == NULL)
			{
			return (0);
			}
			for (i = 0; i < e; i++)
			{
			d[i] = s1[i];
			}
			for (i = 0; i < (e + n); i++)
			{
			d[i] = s2[i - e];
			}
			d[i] = '\0';
return (d);
}
