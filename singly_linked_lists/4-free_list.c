#include "lists.h"
#include <stdlib.h>
/**
 *free_lists-function to free list
 *@head: pointer to head node
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
