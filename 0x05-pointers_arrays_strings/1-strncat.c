#include "holberton.h"
/**
* _strncat - concatenates two strings
* @src: first string
* @dest: second string
* @n: src length
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int len, dlen, i;

	for (len = 0; src[len] != '\0'; len++)
	;
	for (dlen = 0; dest[dlen] != '\0'; dlen++)
	;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';

	return (dest);
}
