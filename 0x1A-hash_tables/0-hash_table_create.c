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
	n_hT  = (hash_table_t *)malloc(sizeof(hash_node_t));
	if (n_hT)
	{
		n_hT->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
		n_hT->size = size;
	}
	while (size)
	{
		if (n_hT)
			n_hT->array[size - 1] =  NULL;
		size--;
	}
	return (n_hT);
}
int main(void)
{
	hash_table_t *ht;
	size_t i;

	ht = hash_table_create(2048);
	if (!ht || ht->size != 2048 || !ht->array)
		return (EXIT_FAILURE);
	/*Loop through the array, should not SEGV*/
	for (i = 0; i < 2048 && ht->array[i]; ++i);
	return (EXIT_SUCCESS);
}