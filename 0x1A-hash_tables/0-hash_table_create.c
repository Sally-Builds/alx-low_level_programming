#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: the size of the hash table
 *
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(size *  sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
