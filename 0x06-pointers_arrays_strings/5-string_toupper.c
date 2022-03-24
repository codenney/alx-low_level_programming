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
 * string_toupper - Function entry
 * Description: A function that changes all lowercase letters of
 * ...a string to uppercase
 * @ch: The string variable
 * Return: A pointer address to the updated string
 */
char *string_toupper(char *ch)
{
	int counter = 0;
	int len = findLength(ch);

	while (counter < len)
	{
		if (ch[counter] >= 97 && ch[counter] <= 122)
		{
			ch[counter] = *(ch + counter) - 32;
		}

		counter++;
	}

	return (ch);
}
