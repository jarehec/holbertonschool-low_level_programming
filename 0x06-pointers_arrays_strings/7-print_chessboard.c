#include "holberton.h"
/**
* print_chessboard - prints a chessboard
* @a: multi-dimensional array
*/
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(a[row][col]);
		_putchar('\n');
	}
}
