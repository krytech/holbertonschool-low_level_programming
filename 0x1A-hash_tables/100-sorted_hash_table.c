#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table with a given size
 * @size: size of hash table
 * Return: pointer to newly created hash table, otherwise NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	shash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;

	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	ht->size = size;
	ht->array = array;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * insert_in_shlist - inserts node into a sorted list
 * @ht: sorted hash table
 * @node: node to insert
 * Return: 1 if successful, otherwise 0 if failed
 */

int insert_in_shlist(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *ph;

	/* empty hash table */
	if (!(ht->shead))
	{
		ht->shead = node;
		ht->stail = node;
		return (1);
	}
	/* insert at beginning */
	if (strcmp(node->key, (ht->shead)->key) <= 0)
	{
		node->snext = ht->shead;
		(ht->shead)->sprev = node;
		ht->shead = node;
	}
	/* insert at end */
	else if (strcmp(node->key, (ht->stail)->key) > 0)
	{
		node->sprev = ht->stail;
		(ht->stail)->snext = node;
		ht->stail = node;
	}
	else /* insert in middle */
	{
		ph = ht->shead;
		while (ph->snext && strcmp(node->key, (ph->snext)->key) > 0)
			ph = ph->snext;
		node->snext = ph->snext;
		node->sprev = ph;
		(ph->snext)->sprev = node;
		ph->snext = node;
	}
	return (1);
}

/**
 * add_hash_node - adds a new node into the sorted hash table
 * @ht: hash table
 * @key: key value
 * @value: value to be added
 * @index: index to insert the node into the hash table
 * Return: 1 if successful, otherwise 0 if not
 */

int add_hash_node(shash_table_t *ht, const char *key, const char *value,
	unsigned long int index)
{
	shash_node_t *node = NULL;
	char *val;
	char *ky;
	(void) index;

	val = strdup(value);
	ky = strdup(key);

	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);

	node->key = ky;
	node->value = val;
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	if ((ht->array)[index] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[index];
	(ht->array)[index] = node;

	return (insert_in_shlist(ht, node));
}

/**
 * shash_table_set - adds an element to a sorted hash table
 * @ht: hash table to add or update the key/value to
 * @key: key value
 * @value: value associated with the key
 * Return: 1 if successful, otherwise 0 if not
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node = NULL;
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

/**
 * shash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char *comma = "";

	if (!ht)
		return;

	node = ht->shead;
	putchar('{');
	while (node)
	{
		printf("%s'%s': '%s'", comma, node->key, node->value);
		comma = ", ";
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table to print
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char *comma = "";

	if (!ht)
		return;

	node = ht->stail;
	putchar('{');
	while (node)
	{
		printf("%s'%s': '%s'", comma, node->key, node->value);
		comma = ", ";
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to delete
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *node, *next;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (index < ht->size)
	{
		node = (ht->array)[index];
		while (node)
		{
			next = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			free(node);
			node = next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
