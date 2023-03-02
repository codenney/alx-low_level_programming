#include "main.h"

/**
 * *cap_string - function entry
 * Description: A function that capitalizes all words of a string
 * @ch: parameter
 * Return: the array
 */
char *cap_string(char *ch)
{
	int i = 0, j;
	char seperators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};

	while (ch[i] != '\0')
	{
		if (ch[i] >= 97 && ch[i] <= 122)
		{
			if (i == 0)
				ch[i] = ch[i] - 32;
			else
			{
				j = 0;
				while (seperators[j] != '\0')
				{

					if (ch[i - 1] == seperators[j])
					{
						ch[i] = ch[i] - 32;
					}
					j++;
				}
			}
		}
		i++;
	}

	return (ch);
}
