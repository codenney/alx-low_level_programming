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
 * str_concat - Function entry
 * Description: A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space with the s1
 * ...or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, totallength, i = 0, j = 0;
	char *space;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = findLength(s1);
	l2 = findLength(s2);
	totallength = l1 + l2;

	space = (char *)malloc((totallength * sizeof(char)) + 1);

	if (space == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		space[j] = s1[i];
		i++;
		j++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		space[j] = s2[i];
		i++;
		j++;
	}

	space[j] = '\0';

	return (space);

	free(space);
}
