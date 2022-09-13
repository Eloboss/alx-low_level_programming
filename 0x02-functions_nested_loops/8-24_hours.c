#include "main.h"
/**
 * jack_bauer- Prints a clock
 *
 *
 */
void jack_bauer(void)
{
int i;
int p;
for (i = 0; i < 24; i++)
{
for (p = 0; p < 60; p++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(p / 10 + '0');
_putchar(p % 10 + '0');
_putchar('\n');
}
}
}
