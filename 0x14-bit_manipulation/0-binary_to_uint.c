#include "main.h"

/**
 * binary_to_uint -  function entry
 * Description: A function that converts a binary number to an unsigned int
 * @b: the binary digit to convert
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int arrLength, convertToDigit, increaseBinary = 1, decimal = 0;

	if (b == NULL)
		return (0);

	for (arrLength = 0; b[arrLength] != '\0'; arrLength++)
		;

	for (arrLength -= 1; arrLength >= 0; arrLength--)
	{
		if (b[arrLength] != '1' && b[arrLength] != '0')
			return (0);

		convertToDigit = b[arrLength] - '0';
		decimal += convertToDigit * increaseBinary;
		increaseBinary *= 2;
	}

	return (decimal);
}
