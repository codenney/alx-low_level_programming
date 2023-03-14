#include "main.h"

/**
 * _strspn - function entry
 * Description: A function that gets the length of a prefix substring
 * @s: the string to search
 * @accept: sequence to search in the string
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, flag = 1; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				flag = 0;
		}
		if (flag == 1)
			break;
	}
	return (i);
}
