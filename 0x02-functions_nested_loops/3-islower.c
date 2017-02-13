#include "holberton.h"
/**
* _islower -  checks for lowercase character
* @c:  value to check
* Return: 1 if letter is lowercase, 0 if not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
