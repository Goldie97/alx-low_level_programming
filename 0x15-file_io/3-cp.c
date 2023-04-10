#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - ...........
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on success and -1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
/**
 * cp - Function that copies the content of a file to another
 * @file_from:the name of the source file
 * @file_to: the name of the destination file
 * Return: 1 on success and -1 on failure
 */
void cp(const char *file_from, const char *file_to)
{
	int fd, ofd, rfd, od;
	char buf[1024];

	fd = open(file_from, O_RDONLY);
	ofd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rfd = read(fd, buf, 1024);
	od = write(ofd, buf, rfd);
	if ((file_from == NULL) | (fd == -1))
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(98);
	}
	else if (rfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
		exit(99);
	}
	else if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't clodr fd %d\n", fd);
		exit(100);
	}
	else if (close(ofd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", ofd);
		exit(100);
	}
	while (rfd > 0)
	{
		if ((od != rfd) || (ofd == -1))
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
			exit(99);
		}
	}
}
