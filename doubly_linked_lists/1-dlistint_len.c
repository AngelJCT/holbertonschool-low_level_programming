#include "lists.h"
/**
 *dlistint_len-function to print the number of elements n a list
 *@h: pointer to head node
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodesnumber = 0;

	while (h != NULL)
	{
		h = h->next;
		nodesnumber += 1;
	}
	return (nodesnumber);
}
