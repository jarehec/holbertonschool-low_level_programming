#include "holberton.h"
/**
* set_bit - sets value of bit to 1 at given index
* @n: base10 integer
* @index: index
*
* Return: 1, -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1) || n == NULL)
		return (-1);

	*n |= (1 << index);
	if ((*n >> index) & 1)
		return (1);
	else
		return (-1);
}
