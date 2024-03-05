#include "hash_tables.h"
int main()
{
	hash_table_t *new = hash_table_create(5);

	hash_table_set(new, "name", "Enock");
	hash_table_set(new, "Age", "24");
	hash_table_set(new, "height", "153");
	hash_table_set(new, "colour", "Black");
	hash_table_print(new);
	hash_table_delete(new);
}