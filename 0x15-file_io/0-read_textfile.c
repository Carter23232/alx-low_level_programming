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
	ssize_t num = 0;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((num = read(fd, buffer, letters)))
	{
		if (write(STDOUT_FILENO, buffer, letters) == -1)
			return (0);
	}
	return (num);
}
