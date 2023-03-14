#include "main.h"
int findLength(char *str);

/**
 * *str_concat - function entry
 * @s
 * Description: A function that concatenates two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: NULL on failure
 * returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int sum, j, i = 0;
	char *mem = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	sum = findLength(s1) + findLength(s2) + 1;

	mem = (char *)malloc(sum * sizeof(char));

	if (mem == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		mem[i] = s2[j];
		j++, i++;
	}
	mem[i] = '\0';

	return (mem);
}

/**
 * findLength - function entry
 * Description: find the length of a string
 * @str: parameter
 * Return: the length of the string
 */
int findLength(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
