#include "holberton.h"
/**
*main - writes Holberton with newline
*Return: 0
*/
int main(void)
{
	char hbtn[] = "Holberton";
	int position;

	while (position <= 9)
	{
		_putchar(hbtn[position]);
		position++;
	}
	_putchar('\n');
	return (0);
}
