#include "holberton.h"
/**
* flip_bits - returns the number of different bits
* @n: first int
* @m: second int
*
* Return: number of bits to flip to get from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int size = sizeof(n) * 8 - 1, count = 0;

	while (size >= 0)
	{
		if (((n >> size) & 1) ^ ((m >> size) & 1))
			count++;
		size--;
	}
	return (count);
}
