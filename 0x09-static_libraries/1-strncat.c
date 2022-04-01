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
 * _strncat - Pointer function entry
 * Description: A function that concatenates two strings
 * @dest: The destination pointer variable
 * @src: The source pointer variable
 * @n: It will use at most n bytes from src
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, len_dest, final_count_of_desc;

	count = 0;

	len_dest = findLength(dest);
	/*len_src = findLength(src);*/
	final_count_of_desc = len_dest;

	while (count < n && src[count] != '\0')
	{
		dest[len_dest + count] = src[count];
		count++;
		final_count_of_desc++;
	}

	dest[final_count_of_desc] = '\0';

	return (dest);
}
