#include "holberton.h"
/**
* is_prime_number - returns 1 if n is prime, 0if not
* @n: number to test
* Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if ((n != 1) && (n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0) && (n % 7 != 0))
		return (1);
	return (0);
}
