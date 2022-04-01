#include "main.h"

/**
 * _strpbrk - Function entry
 * Description: A function that searches a string for any of a set of bytes
 * @s: string that needs to be scanned
 * @accept: string which characters needs to be located in s
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * ...or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}

	return (NULL);
}
