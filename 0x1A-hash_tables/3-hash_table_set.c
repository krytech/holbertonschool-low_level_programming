#include "hash_tables.h"

/**
 * add_hash_node - adds a new node into the hash table
 * @ht: hash table
 * @key: key value
 * @value: value to be added
 * @index: index to insert the node into the hash table
 * Return: 1 if successful, otherwise 0 if not
 */

int add_hash_node(hash_table_t *ht, const char *key, const char *value,
	unsigned long int index)
{
	hash_node_t *node = NULL;
	char *val;
	char *ky;

	val = strdup(value);
	ky = strdup(key);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = ky;
	node->value = val;

	if ((ht->array)[index] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[index];
	(ht->array)[index] = node;

	return (1);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key value
 * @value: value associated with the key
 * Return: 1 if successful, otherwise 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	char *val;

	if (!ht || strlen(key) == 0 || !(ht->array) || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[index];
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;

	if (node)
	{
		val = strdup(value);
		free(node->value);
		node->value = val;
		return (1);
	}
	return (add_hash_node(ht, key, value, index));
}
