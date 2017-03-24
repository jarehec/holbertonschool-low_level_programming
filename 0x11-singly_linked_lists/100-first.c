#include "lists.h"
#include <stdio.h>
/**
* first - prints a string before main
*/
void first(void) __attribute__((constructor));
void clean(void)__attribute__((destructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
void clean(void);
