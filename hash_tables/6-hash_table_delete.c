#include "hash_tables.h"
/**
 *hash_table_delete-function to delete a hash table
 *@ht: pointer to hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
