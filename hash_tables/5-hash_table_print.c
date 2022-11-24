#include "hash_tables.h"
/**
 *hash_table_print-function to print a hash table
 *@ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	long unsigned int lastIndex;

	if (ht == NULL)
	{
	}

	lastIndex = ht->size - 1;
	while (ht->array[lastIndex] == NULL && lastIndex != 0)
		lastIndex--;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (i != lastIndex)
				printf(", ");
		}
	}
	printf("}");
	printf("\n");
}
