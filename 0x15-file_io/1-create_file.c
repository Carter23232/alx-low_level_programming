#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of fd to read and print
 * @text_content: text to be written
 * Return: returns 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, exist, truncated, writtentr, written, len;
	char *cpy = text_content;

	if (filename == NULL)
		return (-1);
	while (*cpy != '\0')
	{
		len++;
		cpy++;
	}
	exist = open(filename, O_RDONLY);
	if (exist != -1)
		truncated = truncate(filename, len);
	if (exist == -1)
		fd = creat(filename, 600);
	if (text_content != NULL)
	{
		if (truncated != -1)
			writtentr = write(fd, text_content, len);
		written = write(fd, text_content, len);
	}
	close(fd);
	if (written || writtentr)
		return (1);
	return (-1);

}
