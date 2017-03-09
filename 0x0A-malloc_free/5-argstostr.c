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
	int len = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = total_len(ac, av);

	cpy = malloc(sizeof(char) * len + 1);

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
int total_len(int ac, char **av)
{
	int i, j, tlen = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			tlen++;
	}
	return (tlen);
}
