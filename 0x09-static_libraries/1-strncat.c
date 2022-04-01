#include "main.h"
/**
* _strncat - Entry point
* Description - A function that concatenates two strings
* *@dest: the function accepts an input saved into dest
* *@src: the function accepts an input saved into src
* *@n: the function accepts an input saved into n
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
if (j < n)
{
j++;
i++;
}
else
{
break;
}
}
dest[i] = '\0';
return (dest);
}
