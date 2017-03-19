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
	int i = 0, set = 0;
	va_list args;
	struct f_type types;

	if (format == NULL)
		return;
	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				types.c = va_arg(args, int);
				printf("%c", types.c);
				break;
			case 'i':
				types.i = va_arg(args, int);
				printf("%d", types.i);
				break;
			case 'f':
				types.f = va_arg(args, double);
				printf("%f", types.f);
				break;
			case 's':
				types.s = va_arg(args, char *);
				if (types.s == NULL)
					printf("(nil)");
				else
					printf("%s", types.s);
				break;
			default:
				set = 1;
		}
		if (format[i + 1] != '\0' && set != 1)
			printf(", ");
		set = 0;
		i++;
	}
	printf("\n");
	va_end(args);
}
