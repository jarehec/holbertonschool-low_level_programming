#include "holberton.h"
/**
* _pow_recursion - multiplies x to power of y
* @x: base
* @y: power
* Return: base^power if y >00
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
