#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - gets the sum of int arguments
* @n: num of arguments
* @...: ints
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int count;
	va_list num;

	if (n == 0)
		return (0);

	va_start(num, n);

	for (count = 0; count < n; count++)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
}
