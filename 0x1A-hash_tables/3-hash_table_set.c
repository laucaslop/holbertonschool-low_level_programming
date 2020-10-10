#include "hash_tables.h"
/**
* hash_table_set -  adds an element to the hash table
* @ht: hash table ptr
* @key:  key of the array
* @value: associated value with the key
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *entry = NULL;
	hash_node_t *new = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	entry = ht->array[index];

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = strdup(value);
			if (entry->value == NULL)
				return (0);
			return (1);
		}
		entry = entry->next;
	}
	new = malloc(sizeof(hash_node_t));

	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL  || new->value == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return
