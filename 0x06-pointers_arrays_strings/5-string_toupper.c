#include "main.h"

/**
 * *string_toupper - function entry
 * Description: A function that changes all lowercase
 * letters of a string to uppercase
 * @a: the string address
 * Return: the string address
 */
char *string_toupper(char *a)
{
	int count = 0;

	while (a[count] != '\0')
	{
		if (a[count] >= 'a' && a[count] <= 'z')
			a[count] = a[count] - 32;
		count++;
	}

	return (a);
}
