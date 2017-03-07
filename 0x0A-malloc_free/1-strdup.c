#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to memory with a copy with a copy of the string
* @str: string
* Return: mem
*/
char *_strdup(char *str)
{
	int i, len;
	char *mem;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	;

	mem = malloc(sizeof(char) * len);

	for (i = 0; i <= len; i++)
		mem[i] = str[i];

	return (mem);
}
