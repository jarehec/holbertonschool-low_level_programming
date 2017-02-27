#include "holberton.h"
/**
* _memset - fills memory with a constant byte
* @s: memory area
* @b: constant byte
* @n: number of bytes
* Return: pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;
	char *ptr = s;

	for (count = 0; count < n; count++)
		s[count] = b;

	return (ptr);
}
