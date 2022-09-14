#include "main.h"
#include <stdio.h>
/**
 * print_to_98- print numbers to 98
 * @n: Number to b evaluated
 *
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("98");
printf("\n");
}
