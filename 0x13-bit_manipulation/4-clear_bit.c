#include "holberton.h"
/**
* clear_bit - sets value of bit to 0 at given index
* @n: base10 integer
* @index: index
*
* Return: 1, -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 -1) || n == NULL)
		return (-1);

	*n &= ~(1 << index);

	return ((*n >> index) ^ 1 ? 1 : -1);
}
