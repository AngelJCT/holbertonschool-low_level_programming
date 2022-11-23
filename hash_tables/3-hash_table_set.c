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
	hash_node_t *newnode = malloc(sizeof(hash_node_t));

	if (key == NULL || ht == NULL)
		return (0);
	if (newnode == NULL)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode->key);
		return (0);
	}
	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode->value);
		return (0);
	}
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
	}
	return (1);
}
