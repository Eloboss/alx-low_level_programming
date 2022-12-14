#include "main.h"

/**
 * _strcmp- String to b compared
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}
