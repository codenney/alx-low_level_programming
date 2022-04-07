#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *argstostr - Entry point
* Description - A function that concatenates all
* the arguments of your program
* *@ac: the function accepts an input saved into ac
* *@av: the function accepts an input saved into av
* Return: Success (0)
*/
char *argstostr(int ac, char **av)
{
	char *a, *retp;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;
	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);

	retp = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}
	return (retp);
}
