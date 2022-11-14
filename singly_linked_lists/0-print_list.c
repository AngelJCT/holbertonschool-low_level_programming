#include "list.h"
#include <stdio.h>
/**
 *print_list-function to print a linked list
 *@h: pointer to head node
 */
size_t print_list(const list_t *h)
{
	int nElements = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)");
			printf("\n");
		}
		else
		{
			printf("%s", h->str);
			printf("\n");
		}
			h = h->next;
			nElements += 1;
	}

	return (nElements);
}
