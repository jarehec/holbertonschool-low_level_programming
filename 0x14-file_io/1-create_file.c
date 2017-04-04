#include "holberton.h"
/**
* create_file - creates a file
* @filename: name of the file
* @text_content: content of file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, textsize;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);

	if (filename != NULL && fd != -1)
	{
		textsize = _strlen(text_content);
		if (write(fd, text_content, textsize) != textsize)
			return (-1);
	}
	else
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
/**
* _strlen - returns the length of a string
* @s: string input
* Return: length of s
*/
ssize_t _strlen(char *s)
{
	unsigned int lngth = 0;

	if (s != NULL)
		for (lngth = 0; s[lngth] != '\0'; lngth++)
		;

	return (lngth);
}
