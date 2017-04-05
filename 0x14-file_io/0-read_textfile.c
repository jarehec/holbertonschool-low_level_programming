#include "holberton.h"
/**
* read_textfile - reads a text file and displays the contents
* @letters: number of letters to display
* @filename: file to read
*
* Return: number of printed characters or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *data;
	ssize_t len = 0;

	if (filename != NULL && file > 0)
	{
		data = malloc(sizeof(char) * letters);
		if (data != NULL)
		{
			len = read(file, data, letters);
			if (len < 0 || write(STDOUT_FILENO, data, len) != len)
			{
				free(data);
				return (0);
			}
		}
		free(data);
	}
	close(file);
	return (len);
}
