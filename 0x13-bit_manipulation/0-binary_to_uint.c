#include "holberton.h"
/**
* binary_to_uint - converts binary to base10
* @b: binary digit
*
* Return: decimal value or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, flip = 1, num = 0;

	for (i = 0; b && b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num <<= 1;
		if (b[i] == '1')
			num ^= flip;
	}
	return (num);
}
