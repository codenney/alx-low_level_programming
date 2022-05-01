#include "main.h"

/**
 * binary_to_uint - Function entry
 * Description: A function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if...
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int bitlen = 0, bin = 1, convert = 0;

	if (b == NULL)
		return (0);

	while (b[bitlen] != '\0')
	{
		bitlen++;
	}

	bitlen--;
	while (bitlen >= 0)
	{
		if (b[bitlen] != '0' && b[bitlen] != '1')
			return (0);

		convert = b[bitlen] - '0';
		sum += convert * bin;
		bin *= 2;

		bitlen--;
	}
	return (sum);
}
