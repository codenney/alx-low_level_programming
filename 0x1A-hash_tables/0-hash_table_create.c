#include "hash_tables.h"

/**
 * hash_table_create - To create a hash table
 *
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	hash_node_t **array = NULL;
	unsigned long int i;

	/* Allocate memory for the hash table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;

	/* Allocate memory for the array */
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	/* Initialize the array */
	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}

	hash_table->array = array;

	return (hash_table);
}
