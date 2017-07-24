# 0x0A. C - malloc, free
---
## Concepts Learned from this Project
* Difference between automatic and dynamic allocation
* malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak
---
#### 0-create_array.c
```
char *create_array(unsigned int size, char c);
```
Creates an array of chars, and initializes it with a specific char.

#### 1-strdup.c
```
char *_strdup(char *str);
```
Implementation of the standard library fucntion [strdup](http://man7.org/linux/man-pages/man3/strdup.3.html)

#### 2-str_concat.c
```
char *str_concat(char *s1, char *s2);
```
Implementation of the standard library fucntion [strcat](http://man7.org/linux/man-pages/man3/strcat.3.html)

#### 3-alloc_grid.c
```
int **alloc_grid(int width, int height);
```
Function that returns a pointer to a 2 dimensional array of integers
Each element of the grid is initialized to 0
The function returns NULL on failure


#### 4-free_grid.c
```
void free_grid(int **grid, int height);
```
Frees a 2 dimensional grid allocated by the allocate_grid function
#### 5-argstostr.c
```
char *argstostr(int ac, char **av);
```
Concatenates all the arguments of your program



### holberton.h
This is header file contains all of the prototypes necessary for the main function.
