#include "main.h"

/**
 * create_array - Function entry
 * Description: A function that creates an array of chars
 * ...and initializes it with a specific char
 * @size: the size of the array
 * @c:the specific character to initialize with
 * Return: a pointer to the array, or NULL if it fails
 * ...NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *space = NULL;
	unsigned int count = 0;

	if (size == 0)
		return (NULL);

	space = (char *)malloc(size * sizeof(char));

	if (space == NULL)
		return (NULL);
	else
	{
		while (count < size)
		{
			*(space + count) = c;
			count++;
		}
		return (space);
	}

	free(space);
}
