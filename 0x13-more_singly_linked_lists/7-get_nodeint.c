#include "lists.h"

/**
 * get_nodeint_at_index- Returns nth node
 * @head: Beginning of d string
 * @index: The position
 *
 * Return: Always 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	if (!head || count > index)
	{
		return (NULL);
	}
	else
		if (count == index)
			{
				return (head->n);
				count++;
				head = head->next;
			}
}
