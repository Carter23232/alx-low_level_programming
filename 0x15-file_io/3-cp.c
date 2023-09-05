#include "main.h"
/**
 * main - copy file from src to dest
 * @argc: argument counter
 * @argv: list of arguments
 * Return: always returns 0
*/
int main(int argc, char *argv[])
{
	char buf[1204];
	int dest, src, _read, written;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	_read = 1;
	while (_read)
	{
		_read = read(src, buf, 1204);
		if (_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (_read == 1)
		{
			written = write(dest, buf, 1204);
			{
				if (written == -1 || written != _read)
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
			}
		}
	}
	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src), exit(100);
	}
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	}
	return (0);
}
