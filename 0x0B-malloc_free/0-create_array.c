#include "main.h"

/**
 * *create_array - function entry
 * Description: A function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the memory size to allocate
 * @c: character to create
 * Return: a pointer to the array, or NULL if it fails
 * NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	unsigned int newSize = size * sizeof(char);
	char *mem = (char *)malloc(size * sizeof(char));

	if (mem == NULL || size == 0)
		return (NULL);

	while (i < newSize)
	{
		mem[i] = c;
		i++;
	}

	return (mem);
}
