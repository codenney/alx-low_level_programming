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
	int i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] == 'a' || ch[i] == 'A')
			ch[i] = 4 + '0';
		else if (ch[i] == 'e' || ch[i] == 'E')
			ch[i] = 3 + '0';
		else if (ch[i] == 'o' || ch[i] == 'O')
			ch[i] = 0 + '0';
		else if (ch[i] == 't' || ch[i] == 'T')
			ch[i] = 7 + '0';
		else if (ch[i] == 'l' || ch[i] == 'L')
			ch[i] = 1 + '0';

		i++;
	}


	return (ch);
}
