#include "holberton.h"
/**
* _abs - print absolute value of a
* @a: input
* Return: a
*/
int _abs(int a)
{
	if (a > 0)
		return (a);
	if (a == 0)
		return (0);
	if (a < 0)
	{
		a = (a * -1);
		return (a);
	}
	return (a);
}

