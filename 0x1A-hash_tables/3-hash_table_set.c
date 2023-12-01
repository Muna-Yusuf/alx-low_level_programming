#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: pointer to hash table.
 * @key: (string) to hash.
 * @value: is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *tmp;
	unsigned long int i;

	if (!ht || !key || !value)
	{
		return (NULL);
	}
	index = hash_djb2((unsigned char * )key) % ht->size;
	current = ht->array[index];
	while (current)
	{
		if ((strcmp(current->key), key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
			{
				return (0);
			}
			return (1);
		}
		current = current->next
	}

	new = mallco(sizeof(hash_node_t));
	if (!new)
	{
		return (0);
	}
	new->key =strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value =strdup(value);
	if (
}
