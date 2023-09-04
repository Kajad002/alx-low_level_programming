#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file.
 * @filename: params 1
 * @text_content: param 2
 *
 * Return: 0 on succes, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		n_written = write(fd, text_content, strlen(text_content));
		if (n_written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
