#include "main.h"

/**
 * print_diagonal- Print diagonal
 */

void print_diagonal(int n)
{
int e = 1;
if (n > 0)
{
while (e <= n)
{
_putchar(' ');
_putchar(92);
e++;
}
else
{
_putchar('\n');
}
_putchar('\n');
}
}
