#include "main.h"
/**
 * main - copy file from src to dest
 * @argc: argument counter
 * @argv: list of arguments
 * Return: always returns 0
*/
int main(int argc, char *argv[])
{
	const char *E_msg_arg = "Usage: cp file_from file_to\n",
		*E_src = "Error: Can't read from file ", *E_dest = "Error: Can't write to ";
	char *buf[1024];
	int dest, src, _read = 1, written;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", E_msg_arg), exit(97);
	}
	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "%s %s %s", E_src, argv[2], "\n"), exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "%s %s %s", E_dest, argv[3], "\n"), exit(99);
	}
	while (_read)
	{
		_read = read(src, buf, 1024);
		if (_read == -1)
			dprintf(STDERR_FILENO, "%s %s %s", E_src, argv[2], "\n"), exit(98);
		written = write(dest, buf, 1024);
		if (written == -1 || written != _read)
			dprintf(STDERR_FILENO, "%s %s %s", E_dest, argv[3], "\n"), exit(99);
	}
	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "%s %d %s", "Error: Can't close fd", src, "\n");
		exit(100);
	}
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "%s %d %s", "Error: Can't close fd", dest, "\n");
		exit(100);
	}
	return (0);
}
