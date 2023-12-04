#include "hash_tables.h"

/**
 * hash_table_get - get the value of a key in a hash table
 * @ht: hash table
 * @key: key to retrieve its value
 *
 * Return: returns the value associated with a key or NULL if key doesnt exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
