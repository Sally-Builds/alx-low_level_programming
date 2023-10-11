#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: key to hash
 * @size: size of the array
 *
 * Return: hashed value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
