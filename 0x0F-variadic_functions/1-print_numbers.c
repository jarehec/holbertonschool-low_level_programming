#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_numbers - prints ints
* @separator: int separator
* @n:num of ints
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list num;
	int cpy;


	va_start(num, n);
	for (count = 0; count < n; count++)
	{
		cpy = va_arg(num, int);

		if (count + 1 != n && separator != NULL)
			printf("%d%s", cpy, separator);
		else if (count + 1 == n && separator != NULL)
			printf("%d", cpy);
		else if (separator == NULL)
			printf("%d", cpy);
	}
	printf("\n");
	va_end(num);
}
