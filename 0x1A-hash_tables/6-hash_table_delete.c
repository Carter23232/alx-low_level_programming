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
		if(temp)
		{
			next = temp->next;
			while (next)
			{
				free(next->key);
				free(next->value);
				next = next->next;
			}
		}
		free(temp);
		i++;
	}
	free(ht->array);
}
int main(void)
{
	hash_table_t *ht;
	char *key;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Streetz");
	key = strdup("Tim");
	value = strdup("Britton");
	hash_table_set(ht, key, value);
	key[0] = '\0';
	value[0] = '\0';
	free(key);
	free(value);
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "hetairas", "Bob");
	hash_table_set(ht, "hetairas", "Bob Z");
	hash_table_set(ht, "mentioner", "Bob");
	hash_table_set(ht, "hetairas", "Bob Z Chu");
	hash_table_print(ht);
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}