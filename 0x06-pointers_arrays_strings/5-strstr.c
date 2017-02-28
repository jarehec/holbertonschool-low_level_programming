#include "holberton.h"
/**
* _strstr - finds the first occurrence of the substring
* @haystack: string
* @needle: only use these bytes
* Return: first matching occurrence
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int count, i = 0, rsc;

	for (count = 0; haystack[count] != '\0'; count++)
	{
		rsc = count;

		while (haystack[count] == needle[i])
		{
			i++;
			count++;

			if (needle[i] == '\0')
				return (&haystack[rsc]);

			if (haystack[count]++ != needle[i]++)
				count = rsc;
		}
	}
	return (0);
}
