#include "lists.h"
/**
 *insert_nodeint_at_index-fucntion to insert new node at given position
 *@head: pointer to head node
 *@idx: index of the list for the new node
 *@n: number of elements
 *Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp, *tmp2, *tmp3;
	unsigned int i = 0, j = 0;

	node = malloc(sizeof(listint_t));

	tmp = *head;
	tmp2 = *head;
	tmp3 = *head;

	while (tmp3)
	{
		tmp3 = tmp3->next;
		j++;
	}
	if (idx > j)
		return (NULL);
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
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
		node->n = n;
		node->next = tmp;
		tmp2->next = node;
		return (node);
	}
	else
		return (NULL);
}
