#include "holberton.h"
/**
* _strcat - concatenates two strings
* @src: first string
* @dest: second string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int len, dlen, i;

	for (len = 0; src[len] != '\0'; len++)
	;
	for (dlen = 0; dest[dlen] != '\0'; dlen++)
	;

	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';

	return (dest);
}
