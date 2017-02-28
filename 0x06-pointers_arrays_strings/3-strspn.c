#include "holberton.h"
/**
* _strspn - finds the length of a prefix substring
* @s: string
* @accept: only use these bytes
* Return: bytes matching
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, i, match;

	for (count = 0; s[count] != ' '; count++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[count] == accept[i])
				match++;
		}
	}
	return (match);
}
