#include "holberton.h"
/**
* _strncpy - copies a string
* @src: string to copy
* @n: size
* @dest: copied string
* Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
