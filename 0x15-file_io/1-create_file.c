#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: text content
 * Return: return
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, textLen;

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	for (textLen = 0; text_content[textLen] != '\0'; textLen++)
		;
	bytes = write(fd, text_content, textLen);
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
