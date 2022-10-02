#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * leet- Encodes string ino 1337
 * @s: String to b encoded
 *
 * Return: Always 0
 */

char *leet(char *s)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

/*  scan through string */
	stringCount = 0;
	while (s[stringCount] != '\0')
/* check whether leetLetter is found */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[stringCount])
			{
				s[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (s);
}
