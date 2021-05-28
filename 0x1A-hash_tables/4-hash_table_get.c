#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key value
 * Return: the value associated with the element, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ph;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	ph = (ht->array)[index];

	while (ph && strcmp(ph->key, key) != 0)
		ph = ph->next;
	if (!ph)
		return (NULL);
	else
		return (ph->value);
}
