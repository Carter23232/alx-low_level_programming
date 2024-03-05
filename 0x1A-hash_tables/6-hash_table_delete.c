#include "hash_tables.h"

/**
 * hash_table_print - prints hash_table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp, * next;

	if (!ht)
		return;

	while (i <= ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
