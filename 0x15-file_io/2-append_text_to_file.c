#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);

    for (i = 0; s[i]; i++)
            ;
	return (i);
}
/**
 * append_text_to_file - function that creates a file
 * @filename: file name
 * @text_content: text content
 * Return: return
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes = 0, textLen = _strlen(text_content);

    if (!filename)
        return (0);
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (0);
    if (textLen)
        bytes = write(fd, text_content, textLen);
    if (bytes == -1)
    {
        close(fd);
        return (-1);
    }
    close(fd);
    return (1);
}