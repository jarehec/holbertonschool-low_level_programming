#include "holberton.h"
/**
* print_square - prints a (size x size) square
* @size: square width and height
*/
void print_square(int size)
{
	int sqre;

	if (size <= 0)
		_putchar('\n');

	if (size >= 1)
	{
		for (sqre = 1; sqre <= size * size; sqre++)
		{
			_putchar('#');
			if (sqre % size == 0)
				_putchar('\n');
		}
	}
}
