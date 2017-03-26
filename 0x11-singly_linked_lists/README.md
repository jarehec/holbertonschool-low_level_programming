## Singly linked lists
0-print_list.c		-	prints all the elements of a list_t list
1-list_len.c		-	returns the number of elements in a linked list_t list
2-add_node.c		-	adds a new node at the beginning of a list_t list
3-add_node_end.c	-  	adds a new node at the end of a list_t list
4-free_list.c		-	free a list_t list
100-first.c		-	prints a string before the main function is executed
101-hello_holberton.asm	-	x64 assembly program that prints "Hello, Holberton"

### Usage


```
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "C");
	add_node_end(&head, "is");
	add_node_end(&head, "fun");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}

$ gcc -Wall -Werror -Wextra -pedantic 0-print_list.c 3-add_node_end.c 4-free_list.c -o demo
$ ./demo
[1] C
[2] is
[3] fun
```


                  `.`
             `-/++o:
            `++o++o
            :+++++o:`
          -/++++++++++:.
        .sy+++ooo+++++++/`
       -yyo++:oyyso+++++++`
      .yys++- `syyo+++++++:
   `./sso+/-  .yys++++++++/
`:/++/-.....-/ooo+++++++++/
 ``.` `:+ossso++++++++++++`
    `/sssssoo++++++++++++/`
   -sysssso++++++++++++++++.
  .yysssso++++++++++++++o+++.
  oysssso++++++++:-.````.:+::
  yyssss+++++++-`           `
  yyssss++++++.`
  +ysssso+++++++/:`
  `syssss+++++++++/
   .syssso+++++++++`
    `+ysssso++++++:
      -syssssoo+:.
       `:ssssss+.
          -+ossss/`
            `:+ssso`
           .ooo//ss/
          ::y+o+`ss+
          +o+///yss-
           /syyyso-
             `..`
