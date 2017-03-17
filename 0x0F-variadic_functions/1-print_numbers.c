#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_numbers - prints ints
* @separator: int separator
* @n:num of ints
* @...: int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list num;

	if (separator == NULL)
		separator = "";
	if (n == 0)
		return;

	va_start(num, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(num, int));
		if (count + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
