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
else
{
n = abs(n);
return (n % 10);
}
}
