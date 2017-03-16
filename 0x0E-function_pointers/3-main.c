#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - function
* @argc: number of arguments
* @argv: arguments
* Return: NULL if wrong
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*optr)(int, int);

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		optr = get_op_func(argv[2]);
		printf("%d\n", optr(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
