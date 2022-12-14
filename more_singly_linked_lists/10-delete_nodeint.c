#include "lists.h"
/**
 *delete_nodeint_at_index-function to delete a node at index position
 *@head: pointer to head node
 *@index: given position of node to delete
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i = 1;

	tmp = *head;
	tmp2 = *head;

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
	return (-1);
}
