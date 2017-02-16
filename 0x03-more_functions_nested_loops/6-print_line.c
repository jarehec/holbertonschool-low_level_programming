#include "holberton.h"
/**
* print_line - prints a line n times
* @n: line length
*/
void print_line(int n)
{
	unsigned char count;

	if (!(n <= 0))
	{
		for (count = 1; count <= n; count++)
			_putchar('_');

	}
	_putchar('\n');


}
