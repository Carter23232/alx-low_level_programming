#include "hash_tables.h"

/**
 * hash_table_print - prints hash_table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;
	hash_node_t *temp;

	if (!ht)
		return;

	printf("{");
	while (i <= ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (printed)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			printed = 1;
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}

