#include "holberton.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments
* @ac: num of args
* @av: arg
* Return: pointer to new string
*/
char *argstostr(int ac, char **av)
{
	char *cpy;
	int tlen = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			tlen++;
		tlen++;
	}
	tlen++;
	cpy = malloc(sizeof(int) * tlen);

	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			cpy[k] = av[i][j];
			k++;
		}
		cpy[k++] = '\n';
	}
	cpy[k] = '\0';
	return (cpy);
}
