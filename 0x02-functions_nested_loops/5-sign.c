#include "main.h"
/**
 * print_sign- Print sign of numbers
 * @n: Number to b evaluated
 *
 * Return: Always 0 on success
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
