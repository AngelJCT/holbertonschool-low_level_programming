#include "lists.h"
#include <stdlib.h>
/**
 *insert_dnodeint_at_index-function to insert a node at given position
 *@h: pointer to head node
 *@idx: given position
 *@n: data
 *Return: address of new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tmp, *tmp2, *tmp3;
	unsigned int i = 0, j = 0;

	tmp = *h;
	tmp2 = *h;
	tmp3 = *h;

	while (tmp)
	{
		tmp = tmp->next;
		j++;
	}
	if (idx > j)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	while (i != (idx - 1) && tmp2 != NULL)
	{
		tmp2 = tmp2->next;
		tmp3 = tmp3->next;
		i++;
	}
	tmp3 = tmp3->next;
	newnode->prev = tmp2;
	newnode->next = tmp3;
	tmp2->next = newnode;
	return (newnode);
}
