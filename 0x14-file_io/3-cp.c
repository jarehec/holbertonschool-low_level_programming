#include "holberton.h"
#include <stdio.h>
/**
* main - copies the content of one file to another
* @argc: number of arguments
* @argv: file names
*
* Return: 0
*/
int main(int argc, char **argv)
{
	ssize_t file_from;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}
	file_from = copy_textfile(argv[1], argv[2]);

	return (0);
}
/**
* copy_textfile - copies text from one file to another
* @file_from: source
* @file_to: dest
*
* Return: 1 on succes
*/
int copy_textfile(const char *file_from, const char *file_to)
{
	int from, to, buf = 1024;
	char *data;
	ssize_t len = 0;

	from = open(file_from, O_RDONLY);
	if (from == -1)
	{
		dprintf(from, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	to = open(file_to, O_WRONLY | O_TRUNC);
	if (to == -1)
	{
		to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 664);
			if (to == -1)
			{
				dprintf(to, "Error: Can't write to %s\n", file_to);
				exit(99);
			}
	}
	data = malloc(sizeof(char) * buf);
	if (data != NULL)
	{
		len = read(from, data, buf);
		while (len > buf)
			len += read(from, data, buf);

		write(to, data, len);
		free(data);
	}
	close(from);
	close(to);
	return (1);
}
