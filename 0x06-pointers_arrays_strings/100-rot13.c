#include "main.h"

/**
 * *rot13 - function entry
 * Description: A function that encodes a string using rot13
 * Return: the array
 * char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
 */
char *rot13(char *s)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (input[j] != '\0')
		{
			if (input[j] == s[i])
			{
				s[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
