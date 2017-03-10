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
	int len, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len = 0; s1[len] != '\0'; len++)
	;
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;

	mem = malloc(sizeof(char) * (len + len2 + 1));
	if (mem == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		mem[i] = s1[i];

	for (i = 0; i < len2 && s2[i] != '\0'; i++)
		mem[len + i] = s2[i];
	mem[len + i] = '\0';

	return (mem);
}
