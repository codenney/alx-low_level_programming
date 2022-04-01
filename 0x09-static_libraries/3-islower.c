#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Entry point
 * Description - A function that checks for lowercase character
 * *@c: the function accepts an input saved into c
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int i = islower(c);

	if (i != 0)
	{
		return (1);
	}
	return (0);
}
