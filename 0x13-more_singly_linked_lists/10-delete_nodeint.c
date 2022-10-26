#include "lists.h"

/**
 * delete_nodeint_at_index- Deletes a node at a given position
 * @head: Beginning of d node
 * @index: Position of node
 *
 * Return: Always 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index);
{
	listint_t *elo = *head;
	listint_t *boss = NULL;
	size_t i = 0;


