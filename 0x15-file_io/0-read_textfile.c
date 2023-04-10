#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 * it to POSIX standard output
 * @filename: name of file we are to read and print
 * @letters:  number of letters printed to be read
 * Return: 0 if the file cannot be read
 * 0 if the filename is NULL
 * 0 if it does not write the expected number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rdone;
	char *buf;

	buf = malloc(sizeof(char *) * letters);
	fd = open(filename, O_RDONLY);
	if ((filename == NULL) | (fd == -1) | (buf == NULL))
		return (0);
	rdone = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, rdone);
	free(buf);
	close(fd);
	return (rdone);
}
