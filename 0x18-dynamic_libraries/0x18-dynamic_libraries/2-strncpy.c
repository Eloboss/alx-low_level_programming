#include "main.h"

/**
 * _strncpy- Copies n byte of string
 * @dest: String to b joined
 * @src: String to b joined
 * @n: n bytes
 *
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
