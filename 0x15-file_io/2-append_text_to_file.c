#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: pointer to name of the file
 * @text_content: terminated string to add to the end
 * of the file
 * Return: 1 on success and -1 on failure
 * -1 if filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, donew;

	fd = open(filename, O_WRONLY | O_APPEND);
	if ((filename == NULL) | (fd == -1))
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		donew = write(fd, text_content, len);
		if (donew == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
