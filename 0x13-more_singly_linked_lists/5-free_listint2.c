#include "lists.h"

/**
 * free_listint2- fress memory
 * @head: Beginning of d string
 */

void free_listint2(listint_t **head)
{
	listint_t *elo;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		elo = *head;
		*head = (*head)->next;
		free(elo);
	}
	*head == NULL;
}
