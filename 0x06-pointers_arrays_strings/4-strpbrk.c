#include "holberton.h"
/**
* _strpbrk - searches the for any set of bytes
* @s: string
* @accept: only use these bytes
* Return: pointer to the byte that s matches
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int count, i;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[count] == accept[i])
				return (&s[count]);
		}
	}
	return (0);
}
