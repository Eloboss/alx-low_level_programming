#include "lists.h"

/**
 * free_listint2- fress memory
 * @head: Beginning of d string
 */

void free_listint2(listint_t **head)
{
	if (*head)
	{
		free(head->next);
		free(head);
	}
	
	if (head == NULL)
	{
		return;
	}

	*head == NULL;
}
