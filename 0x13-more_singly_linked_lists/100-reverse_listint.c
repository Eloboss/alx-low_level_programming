#include "lists.h"

/**
 * reverse_listint- Reveses elements in a linked list
 * @head: Beginning of d node
 * Return: Always 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
