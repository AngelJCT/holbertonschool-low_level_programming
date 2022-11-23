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
		ht->array[index] = newnode;
	if (strcmp(newnode->key, key) == 0)
		strcpy(ht->array[index]->value, value);
	return (1);
}
#include "hash_tables.h"
/**
*handling_collision-function to handle collision
*@ht: pointer to hash table
*@index: index
*@newnode: new node to be inserted
*/
void handling_collision(hash_table_t *ht, unsigned long int index, const char *key)
{
	hash_node_t *head = ht->array[index];
	
	if (head == NULL)
	{
		head = malloc(sizeof(hash_node_t));
		head->key = (char *) key;
		ht->array[index] = head;
	}
}
