#include "main.h"

/**
 * _calloc - Function entry
 * Description: A function that allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: size of bytes
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *space = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);

	if (space == NULL)
		return (NULL);

	while (i <  (nmemb * size))
	{
		space[i] = 0;
		i++;
	}

	return (space);
}
