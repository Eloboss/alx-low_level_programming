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
for (e = 'a'; e <= 'z'; e++)
if (e != 'q' && e != 'e')
{
putchar(e);
}
putchar('\n');
return (0);
}
