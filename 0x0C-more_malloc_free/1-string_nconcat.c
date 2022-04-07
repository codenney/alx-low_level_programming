#include "main.h"
int _strlen(char *s);

/**
 * string_nconcat - Function entry
 * Description: A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 * Return: a pointer to the new space with s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *space = NULL;
	unsigned int l1, l2, i, j;
	unsigned int myByte = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if (n >= l2)
		myByte = l2;

	space = (char *)malloc((l1 + myByte + 1) * sizeof(char));

	if (space == NULL)
		return (NULL);

	i = 0;

	while (s1[i] != '\0')
	{
		*(space + i) = s1[i];
		i++;
	}

	j = 0;
	while (j < myByte)
	{
		*(space + i) = s2[j];
		j++;
		i++;
	}
	space[i] = '\0';

	return (space);
}

/**
 * _strlen - Entry point
 * Description - A function that returns the length of a string
 * *@s: the function accepts an input saved into s
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length += 1;
		i++;
	}

	return (length);
}
