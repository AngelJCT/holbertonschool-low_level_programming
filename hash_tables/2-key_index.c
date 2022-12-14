#include "hash_tables.h"
/**
 *key_index-function for index of a key
 *@key: key
 *@size: size of the array
 *Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashIndex = hash_djb2(key);

	hashIndex %= size;
	return (hashIndex);
}
