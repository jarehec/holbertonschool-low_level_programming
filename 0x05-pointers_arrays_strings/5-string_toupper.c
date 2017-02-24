#include "holberton.h"
/**
* string_toupper - makes string CAPS
* @str: char array input
* Return: str
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;

	while (i > 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i--;
	}
	return (str);
}
