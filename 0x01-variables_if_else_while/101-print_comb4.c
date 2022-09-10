#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- Entry point
 *
 *
 *
 * Return: Sign of numbers
 *
 */
int main(void)
{
int i;
int j;
int k;
for (i = 48; i < 56; i++)
{
for (j = 49; j < 57; j++)
{
for (k = 50; k < 58; k++)
{
if (i != j != k && k > j > i)
{
putchar(i);
putchar(j);
putchar(k);
putchar(',');
putchaf(' ');
}
}
}
}
putchar('\n');
return (0);
}
