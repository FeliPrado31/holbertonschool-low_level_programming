#include "holberton.h"
#include <stdio.h>
/**
 * printError - Print error message
 * @code: exit code to stop
 * @msg: the error message to be printed
 * @fileName: the name of the file
 */
void printError(int code, const char *msg, const char *fileName)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, fileName);
	exit(code);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of argument tokens
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int from, to, rd, wr, bz = 1024, closeFrom, closeTo;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);

	if (from == -1)
		printError(98, "Error: Can't read from file", argv[1]);

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (to == -1)
		printError(99, "Error: Can't write to", argv[2]);

	for (rd = read(from, buf, bz); rd > 0; rd = read(from, buf, bz))
	{
		wr = write(to, buf, rd);
		if (wr == -1)
			printError(99, "Error: Can't write to", argv[2]);
	}
	if (rd == -1)
		printError(98, "Error: Can't read from file", argv[1]);

	closeFrom = close(from);

	if (closeFrom == -1)
		printError(100, "Error: Can't close fd", argv[1]);

	closeTo = close(to);

	if (closeTo == -1)
		printError(100, "Error: Can't close fd", argv[2]);

	return (0);
}