#include "holberton.h"
/**
*main - writes Holberton with newline
*Return: 0
*/
int main(void)
{
	char hbtn[] = "Holberton";
	int position;

	for (position = 0; position <= 9; position++)
	{
		_putchar(hbtn[position]);
	}
	_putchar('\n');
	return (0);
}
