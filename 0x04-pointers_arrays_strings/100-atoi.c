#include "holberton.h"
/**
* _atoi - convert a string to an integer
* @s: string
* Return: int
*/
int _atoi(char *s)
{
	int num, min, n;

	num = min = 0;

	for (n = 0; !(s[n] >= '0' && s[n] <= '9') && s[n] != '\0'; n++)
	{
		if (s[n] == '-')
			min++;
	}
	for (; (s[n] >= '0' && s[n] <= '9') && s[n] != '\0'; n++)
	{
		num  = (num * 10) + (s[n] - '0');
	}

	if (min % 2 != 0)
		return (-num);
	else
		return (num);
}
