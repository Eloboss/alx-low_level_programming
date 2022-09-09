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
char e;
char p;
for (e = 'a'; e <= 'z'; e++)
{
putchar(e);
}
for (p = 'A'; p <= 'Z'; p++)
{
putchar(p);
}
putchar('\n');
return (0);
}
