#include "main.h"
/**
 * _isalpha- Detects alphabets
 * @c: Integer to b compared to ASCII
 *
 * Return: Always 0 on success
 */
int _isalpha(int c)
{
if (c > 64 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
