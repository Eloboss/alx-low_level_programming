#include "lists.h"

/**
 * find_listint_loop- Finds loops in a list
 * @head: Beginning of d loop
 *
 * Return: Always 0
 */

listint_t *find_listint_loop(listint_t *head)
{
		listint_t *boss = head;
	listint_t *elo = head;

	if (!head)
		return (NULL);

	while (boss && elo && elo->next)
	{
		boss = elo->next->next;
		boss = boss->next;

		if (elo == boss)
		{
			boss = head;
			while (boss != elo)
			{
				boss = boss->next;
				elo = elo->next;
			}
			return (elo);
		}
	}
	return (NULL);
}
