#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- To add numbers
 * @argc: Argument counts
 * @argv: Argument vectors
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (!isdigit(argv[i])
				{
				printf("Error\n");
				return (1);
				}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

