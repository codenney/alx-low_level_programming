#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point
 * Description - A function that checks for upper character
 * *@c: the function accepts an input saved into c
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int letter = c;

	if (letter >= 'A' && letter <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
