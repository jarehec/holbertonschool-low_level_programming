#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to
*/
char *str_concat(char *s1, char *s2)
{
	char *mem;
	int len, len1, i;

	if (*s1 == '\0' && *s2 == '\0')
		return (NULL);

	for (len = 0; s1[len] != '\0'; len++)
	;
	for (len1 = 0; s2[len1] != '\0'; len1++)
	;

	mem = malloc(sizeof(char) * (len + len1 + 1));

	for (i = 0; i <= len; i++)
		mem[i] = s1[i];

	for (i = 0; i < len1 && s2[i] != '\0'; i++)
		mem[len + i] = s2[i];

	return (mem);
}
