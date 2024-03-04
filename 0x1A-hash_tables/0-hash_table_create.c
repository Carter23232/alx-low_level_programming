#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of array
 * Return: pointer to new created array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_hT = NULL;

	if (size <= 0)
		return (NULL);
	n_hT  = malloc(sizeof(hash_table_t));
	if (n_hT)
	{
		n_hT->array = malloc(sizeof(hash_node_t *) * size);
		n_hT->size = size;
	}
	while(size)
	{
		if (n_hT)
			n_hT->array = NULL;
		size--;
	}
	return (n_hT);
}

