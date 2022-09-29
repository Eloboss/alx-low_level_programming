#include "main.h"
/**
 * helper - Finds the square root of two numbers
 * @a: The number
 * @b: The number to test for the square root of @a
 * Return: square root
 */
int helper(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (helper(a, b + 1));

	return (1);
}
/**
 * _sqrt_recursion- Finds d square of a number
 *
 * @n: Number to b used
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
        int _sqrt_recursion(int n)
{
        if (n == 0)
                return (0);
        return (helper(n, 1));
}
