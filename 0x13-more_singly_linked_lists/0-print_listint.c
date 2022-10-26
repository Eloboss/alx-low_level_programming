#include "lists.h"

/**
 * print_listint- Print all elements of a list
 * @h: string to b used
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);

}
