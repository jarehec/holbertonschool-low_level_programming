#include "holberton.h"
/**
* is_palindrome - determines if a string is a palindrome
* @s: string
* Return: 1 if palindrome 0 if not
*/
int is_palindrome(char *s)
{
	return (cmpr(s, _strlen_recursion(s)));
}
/**
* _strlen_recursion - finds string length
* @s: string
* Return: string length
*/
int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (1 + _strlen_recursion(s + 1));
	return (*s);
}
/**
* cmpr - tests to see if a string is palindrome
* @f: string
* @l: string length
* Return: 1 if palindrome, 0 if not
*/
int cmpr(char *f, int l)
{
	if (l <= 1)
		return (1);

	if (*f == *(f + l - 1))
	{
		return (cmpr(f + 1, l - 2));
	}

	return (0);
}
