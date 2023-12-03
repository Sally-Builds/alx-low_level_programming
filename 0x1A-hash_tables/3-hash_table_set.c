#include "hash_tables.h"

/**
 * hash_table_set - set key value to hash table
 * @ht: hash table
 * @key: key to set
 * @value: value of key
 *
 * Return: 1 for success, 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ht_item;

	if (ht == NULL)
		return (0);

	if (key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	ht_item = malloc(sizeof(hash_node_t));

	if (ht_item == NULL)
		return (0);

	ht_item->key = strdup(key);
	ht_item->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		ht_item->next = NULL;
		ht->array[index] = ht_item;
		return (1);
	}

	ht_item->next = ht->array[index];
	return (1);
}
