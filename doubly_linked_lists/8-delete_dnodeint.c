#include "lists.h"
#include <stdlib.h>
/**
 *delete_dnodeint_at_index-function to delete nodes at index
 *@head: pointer to head node
 *@index: position of nodes
 *Return: 1 if succeeded, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	previous = *head;
	if (index == 0)
	{
		*head = previous->next;
		if (previous->next != NULL)
			previous->next->prev = NULL;
		free(previous);
		return (1);
	}
	while (previous != NULL && i < index - 1)
	{
		if (previous == NULL || previous->next == NULL)
			return (-1);
		previous = previous->next;
		i++;
	}
	current = previous->next->next;
	if (previous->next->next != NULL)
		previous->next->next->prev = previous;
	free(previous->next);
	previous->next = current;
	return (1);
}
