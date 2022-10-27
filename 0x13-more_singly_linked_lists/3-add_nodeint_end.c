#include "lists.h"

/**
 * add_nodeint_end- Add node at d end
 * @head: end of d node
 * @n: Value
 * Return: Always 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (*head);
}
