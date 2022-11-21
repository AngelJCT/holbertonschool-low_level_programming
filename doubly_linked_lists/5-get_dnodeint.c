#include "lists.h"
#include <stdlib.h>
/**
 *get_dnodeint_at_index-function to get node at index
 *@head: pointer to head node
 *@index: position of node
 *Return: current position of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *position = head;

	unsigned int count = 0;

	while (position != NULL)
	{
		if (count == index)
		{
			return (position);
		}
		count++;
		position = position->next;
	}
	return (position);
}
