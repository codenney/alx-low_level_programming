#include <stdio.h>

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
 * leet - Function entry
 * Description: A function that encodes a string into 1337
 * @ch: Holds the address of the string
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: A base address of the string
 */
char *leet(char *ch)
{
	int i = 0, j;
	/*int len = findLength(ch);*/
	char leet[9] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T', '\0'};

	while (ch[i] != '\0')
	{
		j = 0;

		while (leet[j] != '\0')
		{
			if (ch[i] == leet[j] + 32 || ch[i] == leet[j])
			{
				ch[i] = j + '0';
			}
			j++;
			
		}
		i++;
	}
	return (ch);
}
