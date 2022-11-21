#include "lists.h"
#include <stddef.h>
/**
 *print_dlistint-function to print all elements in a list
 *@h: pointer to head node
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodesnum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodesnum += 1;
	}
	return (nodesnum);
}
