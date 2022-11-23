#include "hash_tables.h"
/**
 *hash_table_set-function to add an element to the hash table
 *@ht: hash table
 *@key: key
 *@value: value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *newnode;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	newnode = ht->array[index];
	while (newnode)
	{
		if (strcmp(newnode->key, key) == 0)
		{
			free(newnode->value);
			newnode->value = strdup(value);
			return (1);
		}
		newnode = newnode->next;
	}
	newnode = malloc(sizeof(hash_table_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
