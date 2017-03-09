#include <stdlib.h>
#include "holberton.h"
/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes
* Return: pointer to allocated memory or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len, len1, i;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	len = _strlen(s1);
	len1 = _strlen(s2);

	if (len1 <= n)
		len1 = n;

	str = malloc(sizeof(char) * (len + n + 1));

	if (str == NULL)
		return (NULL);

	str = _strcpy(str, s1);

	for (i = 0; i < n; i++)
		str[len + i] = s2[i];
	str[len + i] = '\0';

	return (str);
}
/**
* _strlen - returns the length of a string
* @s: string input
* Return: length of s
*/
int _strlen(char *s)
{
	unsigned int lngth = 0;

	for (lngth = 0; s[lngth] != '\0'; lngth++)
	;

	return (lngth);
}
/**
* _strcpy - copy a string
* @dest: string output
* @src: string input
* Return: copied string
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	;

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	return (dest);
}
