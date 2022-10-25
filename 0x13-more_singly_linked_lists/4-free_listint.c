#include "lists.h"

/**
 * free_listint- Frees memory to list
 * @head: beginning of d node
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *elo;

	while (head)
	{
		elo = head;
		head = head->next;
		free(elo);
	}
}
