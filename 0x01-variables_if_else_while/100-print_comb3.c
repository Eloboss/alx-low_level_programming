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
int p;
for (e = 48; e <= 56; e++)
{
for (p = 49; p <= 57; p++)
{
putchar(e);
putchar(p);
if (e != p && p > e)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
