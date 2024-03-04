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
	unsigned int  index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = NULL;

	if(!ht)
		return 0;

	if(!key)
		return (0);

	new_node = malloc(sizeof (hash_node_t));

	if (new_node)
	{
		new_node->key = malloc(sizeof(char) * (strlen(key) + 1));
		new_node->value = malloc(sizeof(char) * (strlen(value) + 1));
	}
	if (new_node->key)
		strcpy(new_node->key, key);
	if (new_node->value)
		new_node->value = strdup(value);
	if (ht[index].array != NULL)
	{
		ht[index].array
	}
}