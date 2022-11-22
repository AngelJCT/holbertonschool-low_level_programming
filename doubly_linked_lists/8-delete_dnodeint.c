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
	dlistint_t *tmp, *tmp2;
	unsigned int i = 1;

	tmp = *head, tmp2 = *head;
	if (!head || !*head)
		return (-1);
	while (i != index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (index > i)
		return (-1);
	if (index == 0)
	{
		*head = tmp2->next;
		free(tmp2);
		return (1);
	}
	else
	{
		tmp2 = tmp->next;
		tmp->next = tmp2->next;
		free(tmp2);
		return (1);
	}
	if (head)
	{
		while (*head)
		{
			tmp = (*head);
			*head = (*head)->next;
			free(tmp);
		}
		*head = NULL;
		free(*head);
	}
	return (-1);
}
