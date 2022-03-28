#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * Description: A function that gets the length of a prefix substring
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		unsigned int j = 0, flag = 1;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				flag = 0;
				break;
			}

			j++;
		}
		if (flag == 1)
			break;
		i++;
	}

	return (i);
}
