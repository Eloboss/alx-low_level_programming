#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *elo, *boss;
	size_t no = 0;

	elo = malloc(sizeof(list_t));

	if (elo == NULL)
		return (NULL);

	elo->str = strdup(str);

	while (str[no])
		no++;

	new->len = no;
	elo->next = NULL;
	boss = *head;

	if (boss == NULL)
		*head = elo;

	else
	{
		while (boss->next != NULL)
		boss = boss->next;
		boss->next = elo;
	}

	return (*head);
}
