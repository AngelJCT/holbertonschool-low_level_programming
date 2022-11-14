#include "lists.h"
/**
 *print_listint-function to prints all elements
 *@h: pointer to head node
 *Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	int num_elements = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		h = h->next;
		num_elements += 1;
	}
	return (num_elements);
}
