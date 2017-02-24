#include "holberton.h"
/**
* cap_string - CAP the first letter in a word
* @str: string input
* Return: str
*/
char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if ((*(str + i - 1) == ',' ||
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
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
	}
	return (str);
}
