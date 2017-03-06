#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
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
		if (_isdigit(argv[i]) == 0)
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
/**
*_isdigit - checks for digit
* @c: string input
* Return: 0 if digit, 1 if not
*/
int _isdigit(char *c)
{
	int j;

	for (j = 0; c[j] != '\0'; j++)
		if (!(c[j] >= '0' && c[j] <= '9'))
			return (1);
	return (0);
}
