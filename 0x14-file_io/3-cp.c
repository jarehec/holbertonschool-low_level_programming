#include "holberton.h"
#include <stdio.h>
#define BUF 1024
/**
* main - copies the content of one file to another
* @argc: number of arguments
* @argv: file names
*
* Return: 0
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		end(98, argv[1]);
	copy_textfile(argv[1], argv[2]);

	return (0);
}
/**
* copy_textfile - copies text from one file to another
* @file_from: source
* @file_to: dest
*
* Return: 1 on success
*/
int copy_textfile(const char *file_from, const char *file_to)
{
	int from, to, len;
	char data[BUF];

	from = open(file_from, O_RDONLY);
	if (from == -1)
		end(98, file_from);

	to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		end(99, file_to);
	}

	len = read(from, data, BUF);
	while (len != 0)
	{
		if (len == -1)
			end(98, file_from);
		if (write(to, data, len) == -1)
		{
			end(99, file_to);
		}
		len = read(from, data, BUF);
	}
	if (close(from) == -1)
		endc(100, from);

	if (close(to) == -1)
		endc(100, to);

	return (1);
}
/**
* end - exits the program and prints an error message
* @stat: error number
* @file: file name
*/
void end(int stat, const char *file)
{
	switch (stat)
	{
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(98);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(99);
	}
}
/**
* endc - prints error msg, and exits
* @stat: error stat
* @fd: file descriptor
*/
void endc(int stat, int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(stat);
}
