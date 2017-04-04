#ifndef FILE_H
#define FILE_H
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
typedef unsigned long int size_t;
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
size_t _size(const char *file);
#endif
