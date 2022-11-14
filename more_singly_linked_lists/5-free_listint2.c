#include "lists.h"
/**
 *free_listint2-function to free list
 *@head: pointer to head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = (*head);
			*head = (*head)->next;
			free(tmp);
		}
	}
	else
	{
		return;
	}
	free(*head);
	*head = NULL;
}
