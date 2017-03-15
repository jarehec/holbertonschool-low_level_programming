#ifndef HOLBERTON_H
#define HOLBERTON_H
typedef unsigned long int size_t;
void print_name(char *name, void (*f)(char *));
int _isdigit(char *c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
