#include "lists.h"

/**
 * add_nodeint- Adds node ad d beginning
 * @head: Beginning of d node
 * @n: Value
 * Return: Always 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *elo;

	elo = malloc(sizeof(listint_t));
			if (elo)
			{
			elo->n = n;
			elo->next = *head;
			*head = elo;
			return (*head);
			}
			else
			{
			return (NULL);
			}
}
