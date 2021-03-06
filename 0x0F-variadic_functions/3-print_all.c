#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <float.h>
/**
* print_all - prints data of any type
* @format: format types
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char set = 0, *tmp;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				tmp = va_arg(args, char *);
				if (tmp == NULL)
					tmp = "(nil)";
				printf("%s", tmp);
				break;
			default:
				set = 1;
				break;
		}
		if (format[i + 1] != '\0' && set != 1)
			printf(", ");
		set = 0;
		i++;
	}
	printf("\n");
	va_end(args);
}
