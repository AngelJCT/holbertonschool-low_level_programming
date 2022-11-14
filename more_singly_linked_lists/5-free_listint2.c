#include "lists.h"
/**
 *free_listint2-function to free list
 *@head: pointer to head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tempnode;

	tempnode = *head;

	while (tempnode)
	{
		tmp = tempnode;
		tempnode = tempnode->next;
		free(tmp);
	}
	*head = NULL;
}
