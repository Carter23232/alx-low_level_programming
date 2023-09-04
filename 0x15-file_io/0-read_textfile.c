#include "main.h"
/**
 * read_textfile - returns the value of a bit at a given index
 * @filename: name of fd to read and print
 * @letters: number of letters it should read and print
 * Return: returns number of letters it cold read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int _read, written;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, _read);

	free(buffer);
	close(fd);
	if (written != _read)
		return (0);
	return (_read);
}
