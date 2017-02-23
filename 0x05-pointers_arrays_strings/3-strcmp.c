#include "holberton.h"
/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: int <=0 || >=0 if s1 is found. int <= s2 || > s2 if not equal
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

	return (s2[i] - s1[i]);
}
