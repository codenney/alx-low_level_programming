#include "main.h"

/**
 * main - Main entry
 * Description: program that prints the name of the file it
 * ...was compiled from, followed by a new line
 * Return: 0 as success
 */
int main(void)
{
	int i = 0;
	char *pname = __FILE__;

	while (pname[i] != '\0')
	{
		_putchar(pname[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
