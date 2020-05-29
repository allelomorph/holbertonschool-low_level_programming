#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp;
	bool first = true;

	if (ht && ht->array)
	{
		putchar('{');
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index])
			{
				temp = ht->array[index];
				if (first)
				{
					printf("'%s': '%s'", temp->key,
					       temp->value);
					first = false;
				}
				else
					printf(", '%s': '%s'", temp->key,
					       temp->value);
				while (temp->next)
				{
					temp = temp->next;
					printf(", '%s': '%s'", temp->key,
					       temp->value);
				}
			}
		}
		printf("}\n");
	}
}
