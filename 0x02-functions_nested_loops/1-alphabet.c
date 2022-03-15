#include "main.h"

/**
 * print_alphabet - main entry 
 *
 * Description: Print lowercase of the alphabet
 * Return: nothing, it is void
 *
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
