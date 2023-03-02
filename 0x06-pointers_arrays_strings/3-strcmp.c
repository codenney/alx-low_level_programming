#include <stdio.h>

/**
 * _strcmp - Function entry
 * Description: A function that compares two strings
 * @s1: Variable of the first string
 * @s2: Variable of the second string
 * Return: 0 is equal, negative if s2 > s1
 * ...positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
