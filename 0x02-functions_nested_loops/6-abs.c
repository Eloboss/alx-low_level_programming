#include "main.h"
/**
 * _abs- Prints absolute value of a number
 * @n: Number to b evaluated
 *
 * Return: Always 0 on success
 */
int _abs(int n)
{
if (n >= 1)
{
_putchar(n + '0');
}
else if (n < 1 && n != 0)
{
_putchar((n* = -1) + '0');
}
else
{
_putchar(48);
}
}
