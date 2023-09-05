#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of fd to read and print
 * @text_content: text to be written
 * Return: returns 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, exist, written;

	if (filename == NULL)
		return (-1);
	exist = open(filename, O_RDONLY);
	if (exist != -1)
		truncate(filename, strlen(text_content));
	if (exist == -1)
		fd = creat(filename, 600);
	if (text_content != NULL)
	{
		written = write(fd, text_content, strlen(text_content));
	}
	close(fd);
	if (written)
		return (1);
	return (-1);

}
