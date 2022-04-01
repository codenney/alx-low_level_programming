#include "main.h"

/**
 * _islower - function entry
 * Description: A function that checks for lowercase character
 * @c: inputter character to check
 * Return: 1 if lowercase, 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
