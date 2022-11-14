#include "lists.h"
/**
 *list_len-return number of elements
 *@h: pointer to head node
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int nElements = 0;

	while (h != NULL)
	{
		h = h->next;
		nElements += 1;
	}
	return (nElements);
}
