#include "lists.h"
/**
 *sum_dlistint-function to get the sum ofall data
 *@head: pointer to head node
 *Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
