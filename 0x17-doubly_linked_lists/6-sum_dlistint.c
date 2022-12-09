#include "lists.h"

/**
 * sum_dlistint- Sum of elements
 * @head: head of d list
 * Return: Always 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *elo = head;
	int sum = 0;

	if (elo != NULL)
	{
		while (elo->prev != NULL)
			elo = elo->prev;

		while (elo != NULL)
		{
			sum += head->n;
			elo = elo->next;
		}
	}

	return (sum);
}
