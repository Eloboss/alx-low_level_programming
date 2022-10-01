#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- To multiply numbers
 * @argc: Argument counts
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int e;
	int p;
	int answer;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	e = atoi(argv[1]);
	p = atoi(argv[2]);
	answer = e * p;
	printf("%i\n", answer);
	return (0);
}
