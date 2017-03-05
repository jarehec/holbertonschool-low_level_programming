#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: argument
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
		puts("Error");

	return (argc == 3 ? 0 : 1);
}
