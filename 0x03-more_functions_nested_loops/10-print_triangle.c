#include "holberton.h"
/**
* print_triangle - prints a triangle
* @size: height and base of triangle
*/
void print_triangle(int size)
{
	int spc, tri, count;

	if (size >= 1)
	for (count = 1; count <= size; count++)
	{
		for (spc = size; spc > count; spc--)
			_putchar(' ');
		for (tri = count; tri >= 1; tri--)
			_putchar('#');

		_putchar('\n');
	}
	else
		_putchar('\n');
}
