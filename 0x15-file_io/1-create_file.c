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
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: text content
 * Return: return
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes = 0, textLen = _strlen(text_content);

    if (!filename)
        return (0);
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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