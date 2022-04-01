#include "main.h"
#include <stdio.h>

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
 * _strcat - Pointer function entry
 * Description: A function that concatenates two strings
 * @dest: The destination pointer variable
 * @src: The source pointer variable
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int count, len_dest, len_src;

	count = 0;

	len_dest = findLength(dest);
	len_src = findLength(src);

	while (count <= len_src)
	{
		dest[len_dest + count] = src[count];
		count++;
	}

	return (dest);
}
