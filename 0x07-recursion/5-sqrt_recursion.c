#include "holberton.h"
/**
* _sqrt_recursion - finds the square root
* @n: int
* Return: sqrt of n
*/
int _sqrt_recursion(int n)
{
	return (chksqr(n, 1));
}

/**
* chksqr - increments sr until sr*sr == num
* @num: square
* @sr: looks for sqrt of num
* Return: sqrt of num or -1 if no sqrt
*/
int chksqr(int num, int sr)
{
	if (sr * sr == num)
		return (sr);
	if (sr <= (num / 2))
		return (chksqr(num, sr + 1));

	return (-1);
}
