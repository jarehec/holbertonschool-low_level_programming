#include <stdio.h>
/**
* main - prints number of args
* @argc: number of arguments
* @argv: argument
* Return: 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
