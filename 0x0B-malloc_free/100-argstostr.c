#include "main.h"
/**
 * argstostr - Function entry
 * Description: A function that concatenates all the arguments of your program
 * @ac: holds the count of the argument
 * @av: array of string
 * Return: a pointer to a new string
 * ...NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *space, *retptr;
	int argCount = 0, charTotal = 0;
	int i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (argCount < ac)
	{
		int stringCount = 0;

		while (av[argCount][stringCount] != '\0')
		{
			stringCount++;
			charTotal++;
		}
		charTotal++;
		argCount++;
	}
	charTotal++;

	space = (char *)malloc(charTotal * sizeof(char));
	if (space == NULL)
		return (NULL);
	retptr = space;

	while (i < ac)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			*space = *(*(av + i) + j);
			space++;
			j++;
		}
		*space = '\n';
		space++;
		i++;
	}
	return (retptr);
}
