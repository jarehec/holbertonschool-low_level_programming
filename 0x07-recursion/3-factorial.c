#include "holberton.h"
/**
* factorial - calculates the factorial of n
* @n: int to calculate
* Return: factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
