#include <stdio.h>
/**
*main -  prints all possible different combinations of two digits
*Return: 0
*/
int main(void)
{
	int firstnum = 0, lastnum, i = 1;

	while (i <= 9)
	{
		for (lastnum = i; lastnum <= 9; lastnum++)
		{
			putchar('0' + firstnum);
			putchar('0' + lastnum);
			if (firstnum < 9 && i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
		firstnum++;
	}
	putchar('\n');
	return (0);
}
