#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - prints a name
* @name: name
* @f: function pointer
*/
void print_name(char *name, void(*f)(char *))
{

	if (name == NULL || _isdigit(name) == 1)
		name = "";

		f(name);
}
/**
* _isdigit - determines if a is digit
* @c: input
* Return: 1 if digit, 0 if not
*/
int _isdigit(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= '0' && c[i] <= '9')
			return (1);
	}
			return (0);
}
