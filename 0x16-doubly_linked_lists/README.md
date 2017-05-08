## 0x16. C - Doubly linked lists
0-print_dlistint.c -  Function that prints all the elements of a dlistint_t list
```
julien@ubuntu:~/0x16. Doubly linked lists$ cat main.c 
#include "lists.h"
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x16. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra main.c 0-print_dlistint.c -o a
julien@ubuntu:~/0x16. Doubly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/0x16. Doubly linked lists$
```
1-dlistint_len.c - Function that returns the number of elements in a linked dlistint_t list
```
#include "lists.h"

int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x16. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra main.c 1-dlistint_len.c -o b
julien@ubuntu:~/0x16. Doubly linked lists$ ./b
-> 2 elements
```
2-add_dnodeint.c - Function that adds a new node at the beginning of a dlistint_t list
```
#include "lists.h"

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x16. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/0x16. Doubly linked lists$ ./c 
4
3
2
1
0
```
3-add_dnodeint_end.c - Function that adds a new node at the end of a dlistint_t list
```
#include "lists.h"

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x16. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/0x16. Doubly linked lists$ ./d
0
1
2
3
4
```
4-free_dlistint.c - Frees a dlistint_t list
5-get_dnodeint.c - Returns the nth node of a dlistint_t linked list
6-sum_dlistint.c - Returns the sum of all the data (n) of a dlistint_t list
7-insert_dnodeint.c - Inserts a new node at a given position
```
#include "lists.h"

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 5);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x16. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/0x16. Doubly linked lists$ ./j 
0
1
2
3
4
-----------------
0
1
2
3
4
5
```
8-delete_dnodeint.c - Deletes the node at index index of a dlistint_t
