#include "lists.h"
#include <stdlib.h>
/**
 *insert_dnodeint_at_index-function to insert a node at given position
 *@h: pointer to head node
 *@idx: given position
 *Return: address of new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tmp, *tmp2, *tmp3;
	unsigned int i = 0, j = 0;

	newnode = malloc(sizeof(dlistint_t));
	tmp = *h;
	tmp2 = *h;
	tmp3 = *h;

	while (tmp3)
	{
		tmp3 = tmp3->next;
		j++;
	}
	if (idx > j)
		return (NULL);
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	while (i != (idx - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		tmp2 = tmp2->next;
		i++;
	}
	tmp = tmp->next;
	if (i == (idx - 1))
	{
		newnode->n = n;
		newnode->next = tmp;
		tmp2->next = newnode;
		return (newnode);
	}
	else
		return (NULL);
}
