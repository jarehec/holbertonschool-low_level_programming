#include "holberton.h"
/**
*_strchr - locates a character in a string
* @s: string
* @c: character
* Return: pointer to first occurence of c
*/
char *_strchr(char *s, char c)
{
	unsigned int fnd;

	for (fnd = 0; s[fnd] != '\0'; fnd++)
	{
		if (s[fnd] == c)
			return (&s[fnd]);
		if (s[fnd] == '\0')
			return (0);
	}
	return (0);
}
