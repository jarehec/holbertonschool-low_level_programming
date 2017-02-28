#include "holberton.h"
/**
* _strstr - finds the first occurrence of the substring
* @haystack: string
* @needle: only use these bytes
* Return: first matching occurrence
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int ct, st, i = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[ct])
			st = i;

		for (ct = 0; haystack[i] == needle[ct]; ct++)
		{
			if (needle[ct + 1] == '\0')
				return (&haystack[st]);
			i++;
		}
		i++;
	}
	return ('\0');
}
