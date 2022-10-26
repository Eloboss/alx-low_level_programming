#include "lists.h"

/**
 * sum_listint- Sums the value
 * @head: Beginning of d string
 * Return: Always 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (!head)
	{
		return (0);
	}
	else
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
