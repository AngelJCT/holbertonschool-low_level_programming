#include "lists.h"
/**
 *get_nodeint_at_index-function to get node at nth position
 *@head: pointer to head node
 *@index: node index position at 0
 *Return: nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *position = head;

	unsigned int count = 0;

	while (position != NULL)
	{
		if (count == index)
		{
			return (position);
		}
		count++;
		position = position->next;
	}
	return (position);
}
