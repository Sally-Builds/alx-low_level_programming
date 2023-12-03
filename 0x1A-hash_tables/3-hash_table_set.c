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
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	ht_item = malloc(sizeof(hash_node_t));

	if (ht_item == NULL)
		return (0);

	ht_item->key = strdup(key);
	if (ht_item->key == NULL)
	{
		free(ht_item);
		return (0);
	}
	ht_item->value = strdup(value);
	if (ht_item->value == NULL)
	{
		free(ht_item->key);
		free(ht_item);
		return (0);
	}

	if (ht->array[index] == NULL)
	{
		ht_item->next = NULL;
		ht->array[index] = ht_item;
		return (1);
	}

	ht_item->next = ht->array[index];
	ht->array[index] = ht_item;
	return (1);
}
