#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: char
 * @text_content: char
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_Len, bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
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
