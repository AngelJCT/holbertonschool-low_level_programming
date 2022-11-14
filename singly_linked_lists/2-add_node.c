#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node-function to add new node
 *@head: pointer to head node
 *@str: pointer to strings
 *Return: address to new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

