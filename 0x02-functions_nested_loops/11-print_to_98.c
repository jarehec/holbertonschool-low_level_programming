#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - prints to 98 from input int
* @n: input
*/
void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);

	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
				printf("%d, ", n);
			if (n == 98)
				printf("%d\n", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 98)
				printf("%d, ", n);
			if (n == 98)
				printf("%d\n", n);
			n--;
		}
	}
}
