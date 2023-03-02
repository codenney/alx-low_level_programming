#include "main.h"

/**
 * *cap_string - function entry
 * Description: A function that capitalizes all words of a string
 * Return:
 */
char *cap_string(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if ((ch[i] == ' ' || ch[i] == '\t' || ch[i] == '\n' || ch[i] == ',' ||
			ch[i] == ';' || ch[i] == '.' || ch[i] == '!' || ch[i] == '?' ||
			ch[i] == '"' || ch[i] == '(' || ch[i] == ')' || ch[i] == '{' ||
			ch[i] == '}') 
		&& (ch[i + 1] >= 'a' && ch[i + 1] <= 'z'))
		{
				ch[i + 1] = ch[i + 1] - 32;
		}
		i++;
	}

	return (ch);
}
