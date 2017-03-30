#include "holberton.h"
/**
* binary_to_uint - converts binary to base10
* @b: binary digit
*
* Return: decimal value or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, idx, dec = 0;
	char set = 1;

	if (b == NULL)
		return (0);

	len = checkbin(b);

	if (len != 0)
	{
		for (idx = 0; b[idx] != '\0'; idx++)
		{
			if (b[idx] == '1')
				set = 0;
			if (set == 0)
			{
				dec += (b[idx] - 48) * _pow(2, len);
				len--;
			}
		}
	}
	return (dec / 2);
}
/**
* checkbin - checks if num is bin
* @str: num string
*
* Return: len of binary
*/
unsigned int checkbin(const char *str)
{
	unsigned int idx, len = 0;
	char set = 1;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] == '1')
			set = 0;
		if (set == 0)
			len++;
		if (str[idx] != '0' && str[idx] != '1')
			return (0);
	}
	return (len);
}
/**
* _pow - pow implementation
* @base: base
* @exp: exponent
*
* Return: base ^ exp
*/
long int _pow(unsigned int base, unsigned int exp)
{
	int res = 1;

	while (exp)
	{
		if (exp & 1)
			res *= base;
		exp >>= 1;
		base *= base;
	}
	return (res);
}
