#include "holberton.h"
/**
* get_endianness - gets the endianness of the machine
*
* Return: 0 if little endian, 1 if not
*/
int get_endianness(void)
{
	int n = 1;

	return (*(char *)&n == 1 ? 1 : 0);
}
