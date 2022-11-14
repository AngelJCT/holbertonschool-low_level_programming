#include "lists.h"
/**
 *pop_listint-function to remove first node
 *@head: pointer to head node
 *Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head == NULL)
	{
		return (0);
	}

	else
	{
		tmp = *head;
		*head = (*head)->next;
		num = tmp->n;
		free(tmp);
	}
	return (num);
}
