#include "holberton.h"
/**
* _isdigit - determines if a is digit
* @c: input
* Return: 1 if digit, 0 if not
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
