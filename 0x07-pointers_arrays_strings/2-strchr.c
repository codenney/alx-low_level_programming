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
 * _strchr - Function entry
 * Description: A function that locates a character in a string
 * @s: starting address of the memory to search
 * @c: character to locate in the string s
 * Return: a pointer to the first occurrence of the character c
 * ...or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int len = findLength(s);
	int i = 0;

	while (i < len)
	{
		if (s[i] == c)
			return (&(s[i]));
		i++;
	}

	return (NULL);
}
