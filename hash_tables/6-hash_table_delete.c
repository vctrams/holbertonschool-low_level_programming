#include "hash_tables.h"

/**
  * hash_table_delete - delete a hash table
  * @ht: hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *copy, *del;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			copy = ht->array[i];
			while (copy)
			{
				del = copy;
				copy = copy->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
		free(ht->array);
		free(ht);
	}
}
