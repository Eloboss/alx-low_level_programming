#include "main.h"

/**
 * _isupper- Detects upper case letters
 * @c: Letters to b evaluated
 *
 * Return: Always 0on success
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (0);
}
else
{
return (1);
}
}
