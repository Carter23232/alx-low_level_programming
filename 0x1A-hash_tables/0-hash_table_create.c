#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: size of array
 * Return: pointer to new created array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_hT = NULL;

	if (size)
		n_hT  = (hash_table_t *)malloc(sizeof(hash_node_t ));
	if (n_hT)
		n_hT->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
	while (size)
	{
		if (n_hT)
			n_hT->array[size - 1] =  NULL;
		size--;
	}
	return (n_hT);
}
