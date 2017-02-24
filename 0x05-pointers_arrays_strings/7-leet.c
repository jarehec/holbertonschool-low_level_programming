#include "holberton.h"
/**
* leet - converts to 1337
* @str: string to convert
* Return: str
*/
char *leet(char *str)
{
	int i, t;
	char nc[] = "aAeEoOtTlL";
	char lc[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (t = 0; nc[t] != '\0'; t++)
		{
			if (str[i] == nc[t])
				str[i] = lc[t];
		}
	}
	return (str);
}
