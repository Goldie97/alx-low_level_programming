#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 * it to POSIX standard output
 * @filename: name of file we are to read and print
 * @letters:  number of letters printed to be read
 * Return: 0 if the file can't be read,0 if the function is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fp;
	ssize_t rdone;

	buf = malloc(sizeof(char *) * letters);
	fp = open(filename, O_RDONLY);
	if ((filename == NULL) | (fp == -1) | (buf == NULL))
		return (0);
	rdone = read(fp, buf, letters);
	write(STDOUT_FILENO, buf, rdone);
	free(buf);
	close(fp);
	return (rdone);
}
