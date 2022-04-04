#include "main.h"

/**
 * findLength - Function entry
 * Description: A function that find the length of a string
 * @string: A pointer to the string variable
 * Return: An integer as the length of string
 */
int findLength(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * _strdup - Function entry
 * Description: A function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: the string to copy to the new memory
 * Return: a pointer to the duplicated string
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int length, i = 0;
	char *space = NULL;

	if (str == NULL)
		return (NULL);

	length = findLength(str);
	space = (char *)malloc(length * sizeof(char));

	if (space == NULL)
		return (NULL);

	while (i < length)
	{
		*(space + i) = str[i];
		i++;
	}

	return (space);
	free(space);
}
