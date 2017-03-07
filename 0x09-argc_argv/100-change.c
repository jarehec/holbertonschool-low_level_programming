#include <stdio.h>
#include <stdlib.h>
/**
* main - calculates change
* @argc: number of arguments
* @argv: argument
* Return: 0 or 1 if error
*/
int main(int argc, char *argv[])
{
	int i, chg = 0, money[5] = {25, 10, 5, 2, 1};
	int amt = atoi(argv[1]);

	if (argc == 2 && amt >= 0)
	{
		for (i = 0; amt != 0; i++)
		{
			chg += amt / money[i];
			amt %= money[i];
		}
			printf("%d\n", chg);
	}
	else if (amt < 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		puts("Error");
		return (1);
	}

	return (0);
}
