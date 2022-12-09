#include "lists.h"

/**
 * free_dlistint- frees d list
 * @head: head of d list
 * Return: Always 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *elo;

		if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((elo = head) != NULL)
	{
		head = head->next;
		free(elo);
	}
}
