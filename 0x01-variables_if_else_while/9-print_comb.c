#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- Entry point
 *
 * Return: Sign of numbers
 */
int main(void)
{
int e;
for (e = 48; e <= 57; e++)
{
putchar(e);
if (e != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
