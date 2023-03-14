#include "main.h"

/**
 * *_strdup - function entry
 * Description: A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: the duplicated string
 * Return: a pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *mem = NULL;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	mem = (char *)malloc(i * sizeof(char) + 1);

	if (mem == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		mem[i] = str[i];
	}

	return (mem);
}
