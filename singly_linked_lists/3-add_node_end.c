#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node_end-function to add new node to the end
 *@head: pointer to head node
 *@str: pointer to strings
 *Return: address to new elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL || str == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	lastNode = *head;

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = newNode;

	return (newNode);
}
