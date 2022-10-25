#include "lists.h"

/**
 * print_listint- Print all elements of a list
 * @h: string to b used
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	for ( ; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
