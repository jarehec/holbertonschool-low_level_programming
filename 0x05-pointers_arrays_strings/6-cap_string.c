#include "holberton.h"
/**
* cap_string - CAP the first letter in a word
* @str: string input
* Return: str
*/
char *cap_string(char *str)
{
	int i = 0;
;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
		(*(str + i - 1) == ',' ||
		*(str + i - 1) == ';' ||
		*(str + i - 1) == '.' ||
		*(str + i - 1) == '!' ||
		*(str + i - 1) == '?' ||
		*(str + i - 1) == '"' ||
		*(str + i - 1) == '(' ||
		*(str + i - 1) == ')' ||
		*(str + i - 1) == '{' ||
		*(str + i - 1) == '}' ||
		*(str + i - 1) == ' ' ||
		*(str + i - 1) == '\n' ||
		*(str + i - 1) == '\t'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
