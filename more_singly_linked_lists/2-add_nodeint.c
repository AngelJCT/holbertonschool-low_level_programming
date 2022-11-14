#include "lists.h"
/**
 *add_nodeint-function to add new node at the beginning
 *@head: pointer to head node
 *@n: pointer to number of elements
 *Return: number of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
