#include "variadic_functions.h"

/**
 * print_strings - Function entry
 * Description: A function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: list of the arguments
 * Return: See nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;

	va_list arg;

	if (separator == NULL)
		return;

	va_start(arg, n);

	while (i < n)
	{
		string = va_arg(arg, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator && i < (n - 1))
			printf("%s", separator);
		i++;
	}

	va_end(arg);

	printf("\n");
}
