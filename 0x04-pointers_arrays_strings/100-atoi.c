#include "holberton.h"
/**
* _atoi - convert a string to an integer
* @s: string
* Return: int
*/
int _atoi(char *s)
{
	int num, min, n;

	num = min = n = 0;

	while (!(s[n] >= '0' && s[n] <= '9') && s[n] != '\0')
	{
		if (s[n] == '-')
			min++;
		n++;
	}
	while ((s[n] >= '0' && s[n] <= '9') && s[n] != '\0')
	{
		num  = (num * 10) + (s[n] - '0');
		n++;
	}

	if (min % 2 != 0)
		return (-num);
	else
		return (num);
}
