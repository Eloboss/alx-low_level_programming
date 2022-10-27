#include "lists.h"

/**
 * add_nodeint_end- Add node at d end
 * @head: end of d node
 * @n: Value
 * Return: Always 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *boss = *head;
	listint_t *elo;

	elo = malloc(sizeof(listint_t));
	if (!elo)
	{
		return (NULL);
	}
	elo->n = n;
	elo->next = NULL;

	if (boss == NULL)
	{
		boss = elo;
		return (boss);
	}
	else
	{
		while (boss->next)
		boss = boss->next;
		boss->next = elo;
	}
	return (boss);
}
