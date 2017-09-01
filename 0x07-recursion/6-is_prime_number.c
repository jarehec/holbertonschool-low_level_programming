#include "holberton.h"
/**
* is_prime_number - returns 1 if n is prime, 0 if not
* @n: number to test
* Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
	return (n == 2 ? 1 : (n < 2 ? 0 : get_divisor(2, n)));
}

/**
 * get_divisor - gets the divisor os a number
 * @i: divisor
 * @number: number to check for divisor
 * Return: 0 if divisor found else 1
 */
int get_divisor(int i, int number)
{
	if ((i * i) > number)
		return (1);
	if ((number % i) == 0)
		return (0);
	return (get_divisor(++i, number));
}
