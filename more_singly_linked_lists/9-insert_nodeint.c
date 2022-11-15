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
	listint_t *node, *node2;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	node2 = *head;

	idx--;
	while (idx)
	{
		node2 = node2->next;
		idx--;
	}
	node->next = node2->next;
	node2->next = node;

	return (node2);
}

