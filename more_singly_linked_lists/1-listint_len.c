#include "lists.h"
/**
 *listint_len-function to return number of elements
 *@h: pointer to head node
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int num_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elements += 1;
	}

	return (num_elements);
}