#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array and sets it to char
* @size: size of array
* @c: initial value
* Return: mem
*/
char *create_array(unsigned int size, char c)
{
	char *mem;
	unsigned int i;

	mem = (char *)malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		mem[i] = c;

	return (mem);
}
