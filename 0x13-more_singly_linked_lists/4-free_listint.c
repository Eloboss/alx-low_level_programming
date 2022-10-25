#include "lists.h"

/**
 * free_listint- Frees memory to list
 * @head: beginning of d node
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		free(head->next);
	}
}