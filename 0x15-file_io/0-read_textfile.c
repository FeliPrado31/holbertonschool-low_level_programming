#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[1024 * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, buf, letters);
	bytes = write(STDOUT_FILENO, buf, bytes);
	close(fd);
	return (bytes);
}