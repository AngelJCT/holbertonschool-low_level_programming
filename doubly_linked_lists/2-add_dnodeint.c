#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint-function to add a node to the beginning
 *@head: pointer to head node
 *@n: data of list
 *Return: new node at the beginning of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	newnode->n = n;
	newnode->next = (*head);
	newnode->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = newnode;
	}
	(*head) = newnode;
	return (newnode);
}
