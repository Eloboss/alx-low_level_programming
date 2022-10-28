#include "main.h"

/**
 * get_bit- Returns d value at a given index
 * @n: Integer to b used
 * @index: Index
 *
 * Return: Always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int answer;

	answer = ((n >> index) & 1);

	return (answer);
}
