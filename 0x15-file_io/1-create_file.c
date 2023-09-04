#include "main.h"
/**
 * create_file - creates a file and puts text in it
 * with 600 perms (do not change if it exists)
 *
 * @filename: name for fd
 * @text_content: text to put into fd
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int written = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
		written = write(fd, text_content, inlen);
	}

	if (close(fd) == -1 || inlen != written)
		return (-1);
	return (1);
}
