#include "holberton.h"
/**
* clear_bit - sets value of bit to 0 at given index
* @n: base10 integer
* @index: index
*
* Return: 0 or 1, -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n &= ~(1 << index);

	if (n[index] == 0)
		return (1);
	else
		return (-1);
}
