#include "holberton.h"
/**
 * create_file - that creates a file.
 * @filename: char
 * @text_content: char
 * Return: return
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_Len, bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content == NULL)
		return (1);
	if (fd == -1)
		return (-1);
	for (text_Len = 0; text_content[text_Len] != '\0'; text_Len++)
	{
	}
	bytes = write(fd, text_content, text_Len);
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
