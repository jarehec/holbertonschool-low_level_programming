#include <stdio.h>
#include <stdlib.h>
/**
* main - adds numbers
* @argc: number of arguments
* @argv: argument
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) / 1 != 0)
			add += atoi(argv[i]);
		else
		{
			puts("Error");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
