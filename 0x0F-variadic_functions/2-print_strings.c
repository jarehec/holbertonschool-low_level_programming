#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_strings - prints strings
* @separator: string separator
* @n: num of strings
* @...: string
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list string;
	char *cmp;

	if (separator == NULL)
		separator = "";
	if (n == 0)
		return;

	va_start(string, n);
	for (count = 0; count < n; count++)
	{
		cmp = va_arg(string, char *);
		cmp != NULL ?
			printf("%s", cmp) :
			printf("(nil)");
		if (count + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
