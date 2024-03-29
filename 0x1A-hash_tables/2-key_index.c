#include "hash_tables.h"

/**
 * key_index - index of hash_table
 * @key: hash key
 * @size: size
 * Return:hash index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
