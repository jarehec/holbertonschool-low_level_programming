#include "holberton.h"
/**
* cap_string - CAP the first letter in a word
* @str: string input
* Return: str
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;

	while (i > 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z' && *(str + i - 1) <= 47)
			str[i] -= 32;
		i--;
	}
	return (str);
}
