#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table
  * @ht: The hash table to print
  *
  * Return: nothing
  */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	short sep = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; i < ht->size; ++i)
	{
		node = ht->array[i];

		while (node)
		{
			if (sep == 1)
				printf(", ");

			sep = 1;
			printf("'%s': '%s'", (char *) node->key,
								(char *) node->value);

			node = node->next;
		}
	}

	printf("}\n");
}
