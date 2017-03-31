#include "holberton.h"
/**
* get_bit - returns the bit at a given index
* @n: base10 integer
* @index: index
*
* Return: 0 or 1, -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);

	n >>= index;
	if (n & 1)
		return (1);
	else
		return (0);
}
