#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key to insert
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_n;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	if (ht->array[index]->next != NULL)
	{
		new_n = ht->array[index];
		while (new_n)
		{
			if (strcmp(new_n->key, key) == 0)
				return (new_n->value);
			new_n = new_n->next;
		}
	}
	return (ht->array[index]->value);
}
