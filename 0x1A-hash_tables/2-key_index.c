#include "hash_tables.h"

/**
 * key_index -  key to index mapping or deteminant
 * @key: key to index
 * @size: size of the array used for the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hash_code = hash_djb2(key);

	return (hash_code % size);
}
