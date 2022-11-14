#include "lists.h"
/**
 *free_listint2-function to free list
 *@head: pointer to head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head);
		*head = (*head)->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
}
