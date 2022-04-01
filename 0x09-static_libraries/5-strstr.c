#include "main.h"

/**
 * _strstr - Function entry
 * Description: A function that locates a substring
 * @haystack: string that needs to be scanned
 * @needle: small string which characters needs to be located in haystack
 * Return: a pointer to the beginning of the located substring in haystack
 * ...or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}

	return (0);
}
