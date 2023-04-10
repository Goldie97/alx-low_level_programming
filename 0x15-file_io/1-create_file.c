#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: pointer to write the file
 * Return: -1 if filename is NULL
 * 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t wdone;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if ((fd == -1) | (filename == NULL))
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		wdone = write(fd, text_content, len);
		if (wdone == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
