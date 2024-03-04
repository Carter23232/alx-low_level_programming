#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hashtable
 * @key: key to insert
 * @value: VValue to insert
 * Return:1 if succeeds or 0 o/w
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int  index;
	hash_node_t *new_node = NULL, *temp;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));

	if (new_node)
	{
		new_node->key = malloc(sizeof(char) * (strlen(key) + 1));
		new_node->value = malloc(sizeof(char) * (strlen(value) + 1));

		if (!new_node->key || !new_node->value)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (0);
		}

		strcpy(new_node->key, key);
		new_node->value = strdup(value);
	}
	else
		return (0);

	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		ht->array[index] = new_node;
		new_node->next = temp;
	}
	else
		ht->array[index] = new_node;
	return (1);
}
