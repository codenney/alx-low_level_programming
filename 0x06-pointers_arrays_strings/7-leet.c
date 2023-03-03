#include <stdio.h>

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
	char leet[6] = {'A', 'E', 'O', 'T', 'L', '\0'};
	int intLeet[5] = {4, 3, 0, 7, 1};

	while (ch[i] != '\0')
	{
		j = 0;

		while (leet[j] != '\0')
		{
			if (ch[i] == leet[j] + 32 || ch[i] == leet[j])
			{
				ch[i] = intLeet[j] + '0';
			}
			j++;

		}
		i++;
	}
	return (ch);
}
