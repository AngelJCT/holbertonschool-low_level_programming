#include "lists.h"
#include <stdlib.h>
/**
 *free_dlistint-function to free a list
 *@head: pointer to head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
