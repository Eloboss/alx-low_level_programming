#include "main.h"

/**
 * print_most_numbers- print numbers except 2 and 4
 *
 */
void print_most_numbers(void)
{
int c;
for (c <= 48 && c <= 57)
{
if (c == 50 || c == 52)
{
continue;
_putchar(c);
}
_putchar('\n');
return (0);
}
}