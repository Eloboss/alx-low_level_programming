#include "lists.h"

/**
 * listint_len- prints number of elements
 * @h: String to b used
 * Return: Always 0
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	for ( ; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
