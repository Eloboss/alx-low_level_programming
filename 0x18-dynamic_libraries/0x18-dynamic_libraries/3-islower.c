#include "main.h"
/**
 * _islower- Detects lowercase letters
 *
 *@c: The integer to b compared with ASCIi
 * Return: Always 0 on success
 */
int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
