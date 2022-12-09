#include "lists.h"

/*
 * print_dlistint_t- print integers
 * @h: head of d list
 * Return: Always 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *elo = h;
	size_t count;

	while (elo != NULL)
	{
		elo = elo->next;
		printf("elo->n\n");
		count++;
	}
	return (count);

}
