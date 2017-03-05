#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc > 1 && argc <= 3)
	{
		for (i = 1; i <= 2; i++)
			mult *= atoi(argv[i]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
