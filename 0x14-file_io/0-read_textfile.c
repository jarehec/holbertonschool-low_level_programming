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

	if (filename && file > 0)
	{
		data = malloc(sizeof(char) * letters);
		if (data != NULL)
		{
			len = read(file, data, letters);
			if (len < 0)
				return (0);
			if (write(1, data, len) != len)
				return (0);
		}
		free(data);
	}
	close(file);
	return (len);
}
