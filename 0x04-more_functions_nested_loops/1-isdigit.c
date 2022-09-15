#include "main.h"

/**
 * _isdigit- Detects digits
 * @c: Digit to b evaluated
 *
 * Return: Always 0 on success
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
