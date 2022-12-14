#include "hash_tables.h"
/**
 *hash_table_print-function to print a hash table
 *@ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int lastIndex;

	if (ht == NULL)
	{
		return;
	}

	lastIndex = ht->size - 1;
	while (ht->array[lastIndex] == NULL && lastIndex != 0)
		lastIndex--;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (i != lastIndex)
				printf(", ");
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}");
	printf("\n");
}
