#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: pointer to hash table.
 * @key: (string) to hash.
 *
 * Return: function that retrieves a value associated with a key.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (0);
}
