#include "main.h"

/**
 * more_numbers- print 0 to 14 ten times
 *
 */
void more_numbers(void)
{
int e;
int p;
for (e >= 0; e <= 9; e++)
{
for (p >= 0; p<= 14; p++)
{
if (p >= 10)
{
_putchar(p / 10 + '0');
}
_putchar(p % 10 + '0');
}
_putchar('\n');
}

}

