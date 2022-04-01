#include "main.h"

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
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
