#include "holberton.h"
/**
* set_bit - sets value of bit to 1 at given index
* @n: base10 integer
* @index: index
*
* Return: 0 or 1, -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max = sizeof(n) * 8 - 1;

	if (index > max || n == NULL)
		return (-1);

	*n |= (1 << index);
	return ((*n == 1) ? 1 : -1);
}
