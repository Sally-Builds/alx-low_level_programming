#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		exit(0);

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma_flag == 1)
				printf(", ");
			if (ht->array[i]->next == NULL)
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			else
			{
				current = ht->array[i];
				while (current)
				{
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					current = current->next;
					if (current != NULL)
						printf(", ");
				}
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
