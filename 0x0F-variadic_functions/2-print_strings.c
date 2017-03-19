#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_strings - prints strings
* @separator: string separator
* @n: num of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list string;
	char *cmp;

	va_start(string, n);
	for (count = 0; count < n; count++)
	{
		cmp = va_arg(string, char *);
		cmp == NULL ?
			printf("(nil)") :
			printf("%s", cmp);
		if (count + 1 != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
