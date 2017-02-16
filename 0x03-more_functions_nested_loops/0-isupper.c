#include "holberton.h"
/**
* _isupper - determines if uppercase letter
* Return: 1 if upper, 0 if not
* @c: input value
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
