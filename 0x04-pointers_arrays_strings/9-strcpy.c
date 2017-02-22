#include "holberton.h"
/**
* _strcpy - copy a string
* @dest: string output
* @src: string input
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, icr;

	i = icr = 0;

	while (src[icr] != '\0')
		icr++;

	while (i < icr)
	{
		dest[i] = src[i];

		i++;
	}
	return (dest);
}
