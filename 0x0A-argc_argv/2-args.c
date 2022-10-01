#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- To print string
 * @argc: Arguments counts
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *arg[v])
{
	int i;

	if (argc > 0)
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
