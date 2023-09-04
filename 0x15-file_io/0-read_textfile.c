#include "main.h"

/**
 * read_textfile - returns the value of a bit at a given index
 * @filename: name of file to read and print
 * @letters: number of letters it should read and print
 * Return: returns number of letters it cold read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_ = 0, written;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL || letters == 0 || buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	read_ = read(fd, buffer, letters);
	if (fd == -1 || read_ == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, letters);
	if (written == -1 || written != read_)
		return (0);
	close(fd);
	free(buffer);
	buffer = NULL;
	return (read_);
}
