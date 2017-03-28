## More singly linked lists
* 0-print_listint.c	-	prints all the elements of a listint_t list
* 1-listint_len.c		-	returns the number of elements in a linked listint_t list
* 2-add_nodeint.c		-	adds a new node at the beginning of a listint_t list
* 3-add_nodeint_end.c	-  	adds a new node at the end of a listint_t list
* 4-free_listint.c		-	frees a listint_t list
* 5-free_listint2.c	-	frees a listint_t list
* 6-pop_listint.c	-	deletes the head node of a listint_t linked list
* 7-get_nodeint.c	-	returns the nth node of a listint_t linked list
* 8-sum_listint.c	-	returns the sum of all the data (n) of a listint_t linked list
* 9-insert_nodeint.c	-	inserts a new node at a given position
* 10-delete_nodeint.c	-	deletes the node at an index of a listint_t linked list
### Usage

```
-$ cat file.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
-$ gcc -Wall -pedantic -Werror -Wextra file.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c
-$ ./a.out
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
```
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
```
