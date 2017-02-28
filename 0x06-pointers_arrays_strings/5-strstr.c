#include "holberton.h"
/**
* _strstr - finds the first occurrence of the substring
* @haystack: string
* @needle: only use these bytes
* Return: first matching occurrence
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int ct = 0, st, i = 0;

	 if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
			st = i;

		for (ct = 0; haystack[i] == needle[ct] && haystack[i] != '\0'; ct++)
		{
			if (needle[ct + 1] == '\0')
				return (haystack + st);
			
			i++;
		}
		i = st + 1;
	}
	return ('\0');
}
