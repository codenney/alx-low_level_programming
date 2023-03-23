#include "variadic_functions.h"

/**
 * print_numbers - Function entry
 * Description: A function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: list of arguments
 * Return: See nothing!
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num;
	va_list myarg;

	va_start(myarg, n);

	while (i < n)
	{
		num = va_arg(myarg, int);
		printf("%d", num);
		if (separator && i < (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(myarg);
}
