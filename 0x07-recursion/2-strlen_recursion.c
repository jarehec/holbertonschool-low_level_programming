#include "holberton.h"
/**
*
*
*/
int _strlen_recursion(char *s)
{
	int len = sizeof(s);
	len = (len - 1) * 2;

	return (len);
}
