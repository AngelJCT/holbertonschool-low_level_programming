#include "lists.h"
/**
 *sum_listint-function to get the sum of all data
 *@head: pointer to head node
 *Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
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
