#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm
 * @key: hash key
 * @size: size
 * Return:hash index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
