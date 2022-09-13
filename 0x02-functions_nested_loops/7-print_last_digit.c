#include "main.h"
/**
 * print_last_digit- Prints last digit of a number
 *
 * @n: Number to b evaluated
 *
 * Return: Always 0 on success
 */
int print_last_digit(int n)
{
if (n >= 0 && n <= 9)
{
return (n);
}
else if (n < 0)
{
n *= -1;
return (n % 10);
}
else
{
return (n % 10);
}
}
