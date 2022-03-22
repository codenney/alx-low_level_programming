#include "main.h"

/**
 * puts_half - Entry point
 * Description - A function should print the second half of the string
 * @str: the function accepts an input saved into str
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int length = 0;
	int half = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
	{
		half = (length + 1) / 2;
	}
	else
	{
		half = length / 2;
	}

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}
